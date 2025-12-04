#include <iostream>
/*Escribir un programa para insertar 10 elementos enteros en un vector, seguidamente 
muestre su elemento mayor. */
using namespace std;
int main() {
    int vector[10];
    cout << "Ingrese 10 elementos enteros: ";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector[i];
    }
    int mayor = vector[0];
    for (int i = 1; i < 10; i++) {
        if (vector[i] > mayor) {
            mayor = vector[i];
        }
    }
    cout << "El elemento mayor es: " << mayor<<endl;
    return 0;
}