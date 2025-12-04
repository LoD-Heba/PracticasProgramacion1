#include <iostream>
using namespace std;
/*Ejercicio 9.4: Un número equilibrado es aquel que tiene la misma cantidad de dígitos 
pares que de impares. 
Escribir un algoritmo para saber si un número es equilibrado o no lo es.*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    ///////////////////////////////////////////////////
    cout << "bucle for" << endl;
    int temp = n;
    int sumPares = 0;
    int sumImpares = 0;
    for (int i = 0; temp > 0; temp = temp / 10) {
        int d = temp % 10;
        if (d % 2 != 0) {
            sumImpares++;
        } else {
            sumPares++;
        }
    }
    if (sumPares == sumImpares) {
        cout << "Es equilibrado" << endl;
    } else {
        cout << "No es equilibrado" << endl;
    }
    ///////////////////////////////////////////////////
    cout << "bucle while" << endl;
    temp = n;
    sumPares = 0;
    sumImpares = 0;
    while (temp > 0) {
        int d = temp % 10;
        if (d % 2 != 0) {
            sumImpares++;
        } else {
            sumPares++;
        }
        temp = temp / 10;
    }
    if (sumPares == sumImpares) {
        cout << "Es equilibrado" << endl;
    } else {
        cout << "No es equilibrado" << endl;
    }
    ///////////////////////////////////////////////////
    cout << "bucle do while" << endl;
    temp = n;
    sumPares = 0;
    sumImpares = 0;
    if (temp > 0) {
        do {
            int d = temp % 10;
            if (d % 2 != 0) {
                sumImpares++;
            } else {
                sumPares++;
            }
            temp = temp / 10;
        } while (temp > 0);
    }
    if (sumPares == sumImpares) {
        cout << "Es equilibrado" << endl;
    } else {
        cout << "No es equilibrado" << endl;
    }
    
    return 0;
}
