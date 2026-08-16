param(
    [Parameter(Mandatory = $true)][string]$SourceFile,
    [Parameter(Mandatory = $true)][string]$ExePath
)

$workspace = Split-Path -Parent $PSScriptRoot
$problemDir = Split-Path -Parent $SourceFile
$isLeetCode = ($problemDir -split '[\\/]') -contains 'leetcode'

$exeDir = Split-Path -Parent $ExePath
if (-not (Test-Path $exeDir)) {
    New-Item -ItemType Directory -Path $exeDir -Force | Out-Null
}

if ($isLeetCode) {
    # LeetCode-style: solution.cpp holds only the class. The auto-runner
    # (tools/runner.py) analyzes the method signature and the tests/*.in files
    # (detecting types and layout), generates the glue, splices it into the
    # unified harness (template/leetcode/main.cpp), and compiles with -O2.
    $harness = Join-Path $workspace "template\leetcode\main.cpp"
    if (-not (Test-Path $harness)) {
        Write-Host "Missing $harness - scaffold a LeetCode problem first." -ForegroundColor Red
        exit 1
    }
    Write-Host "Analyzing + building: $problemDir" -ForegroundColor DarkGray
    python (Join-Path $workspace "tools\runner.py") $problemDir -o $ExePath
    exit $LASTEXITCODE
} else {
    # Single-file platforms (Codeforces, AtCoder, CSES, ...): the open file
    # is self-contained (includes main()).
    Write-Host "Building: $SourceFile" -ForegroundColor DarkGray
    & g++ -std=c++17 -O2 $SourceFile -o $ExePath
}

exit $LASTEXITCODE