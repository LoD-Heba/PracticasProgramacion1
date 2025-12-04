# Script para compilar y ejecutar ejercicios de C++
# Uso: .\run.ps1 1 2 o .\run.ps1 libro1 2 o .\run.ps1 10 1.1
# Donde 1 es el número de práctica y 2 es el número de ejercicio
# Para libros: .\run.ps1 libro1 2 compilará practicaLibro1/ejercicio2.cpp

param(
    [Parameter(Mandatory = $true)]
    [string]$practica,
    
    [Parameter(Mandatory = $true)]
    [string]$ejercicio
)

# Detectar compilador g++
$gccPath = "g++"

# Verificar si g++ está en PATH
$gccExists = $null -ne (Get-Command g++ -ErrorAction SilentlyContinue)

if (-not $gccExists) {
    # Si no está en PATH, buscar en Dev-C++
    $devCppPaths = @(
        "C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe",
        "C:\Program Files\Dev-Cpp\MinGW64\bin\g++.exe"
    )
    
    $foundPath = $devCppPaths | Where-Object { Test-Path $_ } | Select-Object -First 1
    
    if ($foundPath) {
        $gccPath = "`"$foundPath`""
        Write-Host "Usando compilador de Dev-C++" -ForegroundColor Yellow
    }
    else {
        Write-Host "Error: No se encontró el compilador g++" -ForegroundColor Red
        Write-Host "Por favor instala MinGW o Dev-C++" -ForegroundColor Red
        exit 1
    }
}

# Detectar si es formato "libro" o "practica" normal
if ($practica -match '^libro(\d+)$') {
    # Formato libro: extraer número después de "libro"
    $practicaNum = $Matches[1]
    $practicaDir = "practicaLibro$practicaNum"
}
else {
    # Formato normal: practica + número
    $practicaDir = "practica$practica"
}

# Verificar si el ejercicio contiene un punto (nuevo formato)
if ($ejercicio -match '\.') {
    # Nuevo formato: ejercicioN-practicaX.Y.cpp
    # El formato del parametro es: N.Y donde N es el numero de ejercicio
    $parts = $ejercicio.Split('.')
    $ejercicioNum = [int]$parts[0]
    $practicaOrigen = $parts[1]
    
    # Determinar la practica de origen basado en el numero de ejercicio
    # ejercicio1 -> practica8, ejercicio2 -> practica9, etc.
    $practicaBase = 7 + $ejercicioNum
    
    $ejercicioFile = "ejercicio$ejercicioNum-practica$practicaBase.$practicaOrigen.cpp"
    $ejercicioExe = "ejercicio$ejercicioNum-practica$practicaBase.$practicaOrigen.exe"
}
else {
    # Formato antiguo: ejercicioN.cpp
    $ejercicioFile = "ejercicio$ejercicio.cpp"
    $ejercicioExe = "ejercicio$ejercicio.exe"
}

# Verificar que existe el archivo
if (-not (Test-Path "$practicaDir\$ejercicioFile")) {
    Write-Host "Error: No existe $practicaDir\$ejercicioFile" -ForegroundColor Red
    exit 1
}

Write-Host "Compilando $practicaDir\$ejercicioFile..." -ForegroundColor Cyan

# Compilar
if ($gccPath -eq "g++") {
    g++ "$practicaDir\$ejercicioFile" -o "$practicaDir\$ejercicioExe"
}
else {
    & cmd /c "$gccPath `"$practicaDir\$ejercicioFile`" -o `"$practicaDir\$ejercicioExe`""
}

if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilacion exitosa! Ejecutando..." -ForegroundColor Green
    Write-Host "================================" -ForegroundColor Yellow
    
    # Ejecutar
    & ".\$practicaDir\$ejercicioExe"
    
    Write-Host "================================" -ForegroundColor Yellow
}
else {
    Write-Host "Error en la compilacion" -ForegroundColor Red
    exit 1
}
