#include <iostream>
using namespace std;
/*
Escribir un algoritmo para mostrar el valor absoluto de un número x ingresado por 
teclado.   
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num < 0) {
        num = -num;
    }
    cout << "Valor absoluto: " << num << endl;
    return 0;
}