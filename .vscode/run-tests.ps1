param(
    [Parameter(Mandatory = $true)][string]$SourceFile,
    [Parameter(Mandatory = $true)][string]$ExePath
)

$problemDir = Split-Path -Parent $SourceFile
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

    $actual = cmd /c "`"$ExePath`" < `"$($inFile.FullName)`"" | Out-String
    $expected = Get-Content $expectedFile -Raw

    if ($actual.Trim() -eq $expected.Trim()) {
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
