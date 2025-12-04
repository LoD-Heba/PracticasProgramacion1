#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar el mayor de tres números introducidos por teclado 
(a, b, c). Si los tres números son iguales muestre “son iguales”.*/
int main() {
    int a, b, c;
    cout << "Ingrese 3 numeros: ";
    cin >> a>> b>> c;
    if (a > b && a > c) {
        cout << "El mayor es: " << a << endl;
    } else if (b > a && b > c) {
        cout << "El mayor es: " << b << endl;
    } else if (c > a && c > b) {
        cout << "El mayor es: " << c << endl;
    } else {
        cout << "Son iguales" << endl;
    }
    return 0;
}   