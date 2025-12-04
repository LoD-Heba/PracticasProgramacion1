#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar la cantidad de dígitos de un número n ingresado 
por teclado. */
int main() {
    int n;  
    cout << "Ingrese un numero: ";
    cin >> n;
    int cant = 0;
    while (n != 0) {
        n = n / 10;
        cant++;
    }
    cout << cant << endl;
    return 0;
}