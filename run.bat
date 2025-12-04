@echo off
setlocal enabledelayedexpansion
REM Script para compilar y ejecutar ejercicios de C++
REM Uso: run.bat 1 2 o run.bat libro1 2 o run.bat 10 1.1
REM Donde 1 es el numero de practica y 2 es el numero de ejercicio
REM Para libros: run.bat libro1 2 compilara practicaLibro1/ejercicio2.cpp

if "%1"=="" (
    echo Error: Debes especificar el numero de practica
    echo Uso: run.bat [practica] [ejercicio]
    echo Ejemplo: run.bat 1 2 o run.bat libro1 2 o run.bat 10 1.1
    exit /b 1
)

if "%2"=="" (
    echo Error: Debes especificar el numero de ejercicio
    echo Uso: run.bat [practica] [ejercicio]
    echo Ejemplo: run.bat 1 2 o run.bat libro1 2 o run.bat 10 1.1
    exit /b 1
)

REM Detectar compilador g++
set GCC_PATH=g++

REM Verificar si g++ esta en PATH
where g++ >nul 2>&1
if %errorlevel% neq 0 (
    REM Si no esta en PATH, buscar en Dev-C++
    if exist "C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe" (
        set GCC_PATH="C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe"
        echo Usando compilador de Dev-C++
    ) else if exist "C:\Program Files\Dev-Cpp\MinGW64\bin\g++.exe" (
        set GCC_PATH="C:\Program Files\Dev-Cpp\MinGW64\bin\g++.exe"
        echo Usando compilador de Dev-C++
    ) else (
        echo Error: No se encontro el compilador g++
        echo Por favor instala MinGW o Dev-C++
        exit /b 1
    )
)

REM Detectar si es formato "libro" o "practica" normal
echo %1 | findstr /B /C:"libro" >nul
if %errorlevel% equ 0 (
    REM Formato libro: extraer numero despues de "libro"
    set PARAM=%1
    set PRACTICA_NUM=!PARAM:~5!
    set PRACTICA=practicaLibro!PRACTICA_NUM!
) else (
    REM Formato normal: practica + numero
    set PRACTICA=practica%1
)

REM Verificar si el segundo parametro contiene un punto (nuevo formato)
echo %2 | findstr /C:"." >nul
if %errorlevel% equ 0 (
    REM Nuevo formato: ejercicioN-practicaX.Y.cpp
    for /f "tokens=1 delims=." %%a in ("%2") do set EJERCICIO_NUM=%%a
    for /f "tokens=2 delims=." %%b in ("%2") do set PRACTICA_ORIGEN=%%b
    goto :nuevo_formato
) else (
    REM Formato antiguo: ejercicioN.cpp
    set EJERCICIO=ejercicio%2
    goto :compilar
)

:nuevo_formato
REM Determinar practica base segun numero de ejercicio
REM ejercicio1 -> practica8, ejercicio2 -> practica9, etc.
set /a PRACTICA_BASE=7 + %EJERCICIO_NUM%
set EJERCICIO=ejercicio%EJERCICIO_NUM%-practica%PRACTICA_BASE%.%PRACTICA_ORIGEN%
goto :compilar

:compilar
if not exist "%PRACTICA%\%EJERCICIO%.cpp" (
    echo Error: No existe %PRACTICA%\%EJERCICIO%.cpp
    exit /b 1
)

echo Compilando %PRACTICA%\%EJERCICIO%.cpp...

%GCC_PATH% "%PRACTICA%\%EJERCICIO%.cpp" -o "%PRACTICA%\%EJERCICIO%.exe"

if %errorlevel% equ 0 (
    echo Compilacion exitosa! Ejecutando...
    echo ================================
    "%PRACTICA%\%EJERCICIO%.exe"
    echo ================================
) else (
    echo Error en la compilacion
    exit /b 1
)
