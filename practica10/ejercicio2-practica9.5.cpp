#include <iostream>
using namespace std;
/*Ejercicio 9.5: Escribir un algoritmo para invertir los dígitos de un número n ingresado por teclado.*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    ///////////////////////////////////////////////////
    cout << "bucle for" << endl;
    int temp = n;
    int invertir = 0;
    for (int i = 0; temp > 0; temp = temp / 10) {
        int d = temp % 10;
        invertir = invertir * 10 + d;
    }
    cout << invertir << endl;
    
    ///////////////////////////////////////////////////
    cout << "bucle while" << endl;
    temp = n;
    invertir = 0;
    while (temp > 0) {
        int d = temp % 10;
        invertir = invertir * 10 + d;
        temp = temp / 10;
    }
    cout << invertir << endl;
    
    ///////////////////////////////////////////////////
    cout << "bucle do while" << endl;
    temp = n;
    invertir = 0;
    if (temp > 0) {
        do {
            int d = temp % 10;
            invertir = invertir * 10 + d;
            temp = temp / 10;
        } while (temp > 0);
    }
    cout << invertir << endl;
    
    return 0;
}
