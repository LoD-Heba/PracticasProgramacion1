#include <iostream>
using namespace std;
/*Escribir un algoritmo para invertir los dígitos de un número n ingresado por teclado. */
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int invertir = 0;
    while (n != 0) {
        int d = n%10;
        invertir = invertir * 10 + d;
        n = n / 10;
    }
    cout << invertir << endl;
    return 0;
}
