#include <iostream>
using namespace std;
/* Escribir un algoritmo para leer una calificación x por teclado, seguidamente indique 
en qué rango se encuentra. Los rangos son los siguientes:
[0 –  40]  → “mala” 
[41 – 60]  → “regular” 
[61 – 90]  → “buena” 
[91 – 100] → “sueño” 
 
Si la calificación no se encuentra dentro del rango, mostrar el siguiente mensaje: “no 
se encuentra dentro del rango” */
int main() {
    int calificacion;
    cout << "Ingrese una calificacion: ";
    cin >> calificacion;
    if (calificacion >= 0 && calificacion <= 40) {
        cout << "Mala" << endl;
    } else if (calificacion >= 41 && calificacion <= 60) {
        cout << "Regular" << endl;
    } else if (calificacion >= 61 && calificacion <= 90) {
        cout << "Buena" << endl;
    } else if (calificacion >= 91 && calificacion <= 100) {
        cout << "Sueño" << endl;
    } else {
        cout << "No se encuentra dentro del rango" << endl;
    }
    return 0;
}