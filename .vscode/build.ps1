param(
    [Parameter(Mandatory = $true)][string]$SourceFile,
    [string]$ExePath = ""
)

$workspace = Split-Path -Parent $PSScriptRoot
$problemDir = Split-Path -Parent $SourceFile
$isLeetCode = ($problemDir -split '[\\/]') -contains 'leetcode'

# Per-problem exe: build/<problemName>.exe (override with -ExePath).
if (-not $ExePath) {
    $problemName = Split-Path -Leaf $problemDir
    $ExePath = Join-Path $workspace "build\$problemName.exe"
}

$exeDir = Split-Path -Parent $ExePath
if (-not (Test-Path $exeDir)) {
    New-Item -ItemType Directory -Path $exeDir -Force | Out-Null
}

# Incremental build: skip if the exe is newer than every input.
$inputs = @($SourceFile)
if ($isLeetCode) {
    $harness = Join-Path $workspace "template\leetcode\main.cpp"
    $runner = Join-Path $workspace "tools\runner.py"
    $inputs += $harness, $runner
}
$testsDir = Join-Path $problemDir "tests"
if (Test-Path $testsDir) {
    $inputs += Get-ChildItem -Path $testsDir -Recurse -Include *.in, *.out
}
$inputs = $inputs | Where-Object { Test-Path $_ }
if (Test-Path $ExePath) {
    $exeTime = (Get-Item $ExePath).LastWriteTime
    $stale = $inputs | Where-Object { (Get-Item $_).LastWriteTime -gt $exeTime }
    if (-not $stale) {
        Write-Host "Up to date: $ExePath" -ForegroundColor DarkGray
        exit 0
    }
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