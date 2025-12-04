#include <iostream>
using namespace std;
/*Un número equilibrado es aquel que tiene la misma cantidad de dígitos pares que de 
impares. Escribir un algoritmo para saber si un número es equilibrado o no lo es. */
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int sumPares = 0;
    int sumImpares = 0;
    while (n != 0) {
        int d = n%10;
        if (d%2 != 0) {
            sumImpares ++;
        } else {
            sumPares ++;
        }
        n = n / 10;
    }       
    if (sumPares == sumImpares) {
        cout << "Es equilibrado" << endl;
    } else {
        cout << "No es equilibrado" << endl;
    }
    return 0;
}