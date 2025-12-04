#include <iostream>
using namespace std;
/*Escribir un programa insertar n elementos en un vector, seguidamente calcule y 
muestre el promedio de sus elementos, finalmente muestre los valores que sean 
mayores al promedio.
Ejemplo de entrada 
7 
81 23 11 98 65 12 34 
ejemplo de salida 
promedio: 46.2857 
los que son mayores al promedio son: 
81 98 65

*/
int main() {
    int n;
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma = suma + vector[i];
    }
    cout << "promedio: " << suma / n << endl;
    cout << "los que son mayores al promedio son: ";
    for (int i = 0; i < n; i++) {
        if (vector[i] > suma / n) {
            cout << vector[i] << " ";
        }
    }
    return 0;
}