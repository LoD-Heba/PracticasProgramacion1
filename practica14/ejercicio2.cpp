#include <iostream>
/*Escribir un programa para insertar 10 elementos enteros en un vector, seguidamente 
muestre su elemento menor. */
using namespace std;
int main() {
    int vector[10];
    cout << "Ingrese 10 elementos enteros: "<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector[i];
    }
    int menor = vector[0];
    for (int i = 1; i < 10; i++) {
        if (vector[i] < menor) {
            menor = vector[i];
        }
    }
    cout << "El elemento menor es: " << menor<<endl;
    return 0;
}