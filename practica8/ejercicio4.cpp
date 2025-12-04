#include <iostream>
using namespace std;
/*Escribir un algoritmo para saber si un número n ingresado es primo o no es primo. 
Un número primo es un número natural mayor que 1 que tiene exactamente dos divisores positivos distintos: 1 y él mismo.
*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    bool primo = true;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            primo = false;
        }
    }
    if (primo) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }
    return 0;
}
