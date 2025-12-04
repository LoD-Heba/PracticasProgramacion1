#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar el mayor de dos números a y b introducidos por 
teclado. Si ambos valores son iguales, entonces muestre “son iguales”. */
int main() {
    int a, b;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    if (a > b) {
        cout << "El mayor es: " << a << endl;
    } else if (b > a) {
        cout << "El mayor es: " << b << endl;
    } else {
        cout << "Son iguales" << endl;
    }
    return 0;
}
