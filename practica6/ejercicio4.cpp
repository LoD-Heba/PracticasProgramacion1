#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar el menor de dos números a y b introducidos por 
teclado. Si ambos valores son iguales, entonces muestre “son iguales”. */
int main() {
    int a, b;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    if (a < b) {
        cout << "El menor es: " << a << endl;
    } else if (b < a) {
        cout << "El menor es: " << b << endl;
    } else {
        cout << "Son iguales" << endl;
    }
    return 0;
}