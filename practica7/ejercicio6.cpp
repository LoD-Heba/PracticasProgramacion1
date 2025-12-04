#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar el factorial de un número n ingresado por teclado */
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum = sum * i;
    }
    cout << sum << endl;
    return 0;
}   