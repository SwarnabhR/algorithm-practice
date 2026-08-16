param(
    [Parameter(Mandatory = $true)][string]$SourceFile,
    [string]$ExePath = ""
)

$workspace = Split-Path -Parent $PSScriptRoot
$problemDir = Split-Path -Parent $SourceFile
$isLeetCode = ($problemDir -split '[\\/]') -contains 'leetcode'

# Single shared exe for every problem.
if (-not $ExePath) {
    $ExePath = Join-Path $workspace "build\main.exe"
}

$exeDir = Split-Path -Parent $ExePath
if (-not (Test-Path $exeDir)) {
    New-Item -ItemType Directory -Path $exeDir -Force | Out-Null
}

if ($isLeetCode) {
    # LeetCode-style: solution.cpp holds only the class. The auto-runner
    # (tools/runner.py) analyzes the method signature and the tests/*.in files
    # (detecting types and layout), generates the glue in memory, splices it
    # into the embedded unified harness, and compiles with -O2.
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