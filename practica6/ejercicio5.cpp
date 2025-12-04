#include <iostream>
using namespace std;
/* Escribir un algoritmo para saber si un número x introducido por teclado es: “positivo”, 
“negativo” o “neutro”. */
int main() {
    int x;
    cout << "Ingrese un numero: ";
    cin >> x;
    if (x > 0) {
        cout << "Positivo" << endl;
    } else if (x < 0) {
        cout << "Negativo" << endl;
    } else {
        cout << "Neutro" << endl;
    }
    return 0;
}