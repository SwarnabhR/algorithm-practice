param(
    [Parameter(Mandatory = $true)][string]$SourceFile,
    [string]$ExePath = ""
)

$workspace = Split-Path -Parent $PSScriptRoot
$problemDir = Split-Path -Parent $SourceFile

# Same single shared exe convention as build.ps1.
if (-not $ExePath) {
    $ExePath = Join-Path $workspace "build\main.exe"
}

$testsDir = Join-Path $problemDir "tests"

if (-not (Test-Path $testsDir)) {
    Write-Host "No tests folder found at $testsDir" -ForegroundColor Yellow
    exit 1
}

$inputFiles = Get-ChildItem -Path $testsDir -Filter "*.in" | Sort-Object { [int]$_.BaseName }

if ($inputFiles.Count -eq 0) {
    Write-Host "No .in files found in $testsDir" -ForegroundColor Yellow
    exit 1
}

$allPassed = $true

foreach ($inFile in $inputFiles) {
    $expectedFile = Join-Path $testsDir "$($inFile.BaseName).out"
    if (-not (Test-Path $expectedFile)) {
        Write-Host "[$($inFile.BaseName)] SKIP - no matching .out file" -ForegroundColor Yellow
        continue
    }

    $outputFile = Join-Path ([System.IO.Path]::GetTempPath()) "test_output_$([System.Guid]::NewGuid()).txt"
    $env:OUTPUT_PATH = $outputFile

    cmd /c "`"$ExePath`" < `"$($inFile.FullName)`"" | Out-Null

    if (Test-Path $outputFile) {
        $actual = Get-Content $outputFile -Raw
        Remove-Item $outputFile -Force
    } else {
        $actual = ""
    }

    $expected = Get-Content $expectedFile -Raw

    $actualNormalized = $actual.Replace("`r`n", "`n").Trim()
    $expectedNormalized = $expected.Replace("`r`n", "`n").Trim()

    if ($actualNormalized -eq $expectedNormalized) {
        Write-Host "[$($inFile.BaseName)] PASS" -ForegroundColor Green
    } else {
        $allPassed = $false
        Write-Host "[$($inFile.BaseName)] FAIL" -ForegroundColor Red
        Write-Host "  --- expected ---" -ForegroundColor DarkGray
        Write-Host "  $expected"
        Write-Host "  --- actual ---" -ForegroundColor DarkGray
        Write-Host "  $actual"
    }
}

if ($allPassed) {
    Write-Host "`nAll tests passed" -ForegroundColor Green
    exit 0
} else {
    Write-Host "`nSome tests failed" -ForegroundColor Red
    exit 1
}
