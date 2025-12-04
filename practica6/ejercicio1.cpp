#include <iostream>
using namespace std;
/* Escribir un algoritmo para saber si un número n introducido por teclado es mayor a 5 
o menor a 5.*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num > 5) {
        cout << "Es mayor a 5" << endl;
    }
    if (num < 5) {
        cout << "Es menor a 5" << endl;
    }
    return 0;
}
