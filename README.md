## Opción 1: Dev-C++

1. Descarga Dev-C++ desde [https://sourceforge.net/projects/orwelldevcpp/](https://sourceforge.net/projects/orwelldevcpp/)
2. Instala el programa (incluye MinGW automáticamente)
3. Los scripts detectarán automáticamente el compilador de Dev-C++

## Opción 2: MSYS2 (Alternativa moderna)

1. Descarga MSYS2 desde [https://www.msys2.org/](https://www.msys2.org/)
2. Instala y ejecuta MSYS2
3. Ejecuta el siguiente comando:
   ```bash
   pacman -S mingw-w64-x86_64-gcc
   ```
4. Agrega al PATH: `C:\msys64\mingw64\bin`

## Uso

Este proyecto incluye dos scripts para compilar y ejecutar ejercicios: `run.bat` (Batch) y `run.ps1` (PowerShell).

### Opción 1: Script Batch (run.bat)

```bash
# Sintaxis básica
.\run.bat [practica] [ejercicio]

# Prácticas normales
.\run.bat 1 2          # Compila y ejecuta practica1/ejercicio2.cpp

# Prácticas de libros
.\run.bat libro1 2     # Compila y ejecuta practicaLibro1/ejercicio2.cpp

# Formato especial para práctica 10 (con punto)
.\run.bat 10 1.1       # Compila ejercicio1-practica8.1.cpp
```

### Opción 2: Script PowerShell (run.ps1)

```powershell
# Sintaxis básica
.\run.ps1 [practica] [ejercicio]

# Prácticas normales
.\run.ps1 1 2          # Compila y ejecuta practica1/ejercicio2.cpp

# Prácticas de libros
.\run.ps1 libro1 2     # Compila y ejecuta practicaLibro1/ejercicio2.cpp

# Formato especial para práctica 10
.\run.ps1 10 1.1       # Compila ejercicio1-practica8.1.cpp
```

## Ejemplos de Uso

```bash
# Ejecutar ejercicio 1 de la práctica 3
.\run.bat 3 1

# Ejecutar ejercicio 5 de la práctica 8
.\run.bat 8 5

# Ejecutar ejercicio 2 de la práctica 12
.\run.bat 12 2

# Ejecutar ejercicio 1 del libro 1
.\run.bat libro1 1

# Ejecutar ejercicio 5 del libro 7
.\run.bat libro7 5

# Ejecutar ejercicio con formato especial (práctica 10)
.\run.bat 10 2.3       # Ejecuta ejercicio2-practica9.3.cpp
```
## Solución de Problemas

### Error: "No se encontró el compilador g++"

- Verifica que MinGW o Dev-C++ estén instalados correctamente
- Asegúrate de que la ruta del compilador esté en el PATH del sistema
- Reinicia la terminal después de modificar las variables de entorno

### Error: "No existe [archivo].cpp"

- Verifica que el número de práctica y ejercicio sean correctos
- Asegúrate de estar en el directorio raíz del proyecto
- Revisa que el archivo exista en la carpeta correspondiente

### Error de permisos en PowerShell

Si recibes un error de política de ejecución, ejecuta:

```powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
```

