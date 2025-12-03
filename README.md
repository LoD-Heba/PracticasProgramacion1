
```bash
# Prácticas normales
.\run.bat 1 2

# Prácticas de libros
.\run.bat libro1 2
```

Esto compilará y ejecutará:

- `practica1/ejercicio2.cpp` (primer ejemplo)
- `practicaLibro1/ejercicio2.cpp` (segundo ejemplo)

### Opción 2: Script PowerShell

```powershell
# Prácticas normales
.\run.ps1 1 2

# Prácticas de libros
.\run.ps1 libro1 2
```

## Ejemplos

```bash
# Ejecutar ejercicio 1 de la práctica 1
.\run.bat 1 1

# Ejecutar ejercicio 3 de la práctica 5
.\run.bat 5 3

# Ejecutar ejercicio 2 de la práctica 10
.\run.bat 10 2

# Ejecutar ejercicio 1 del libro 1
.\run.bat libro1 1

# Ejecutar ejercicio 5 del libro 2
.\run.bat libro2 5
