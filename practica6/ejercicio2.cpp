#include <iostream>
using namespace std;
/*Escribir un algoritmo para saber si un número n introducido por teclado es par o impar. */
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Es par" << endl;
    } else {
        cout << "Es impar" << endl;
    }
    return 0;
}
