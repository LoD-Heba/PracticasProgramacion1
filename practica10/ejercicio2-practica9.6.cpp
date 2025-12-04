#include <iostream>
using namespace std;
/*Ejercicio 9.6: Un número capicúa es número que se lee igual de izquierda a derecha y de derecha 
a izquierda. Por ejemplo, los números 121, 3443, y 12321 son capicúas. 
Escribir un algoritmo para saber si un número n ingresado por teclado es capicúa o no lo es.*/

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    ///////////////////////////////////////////////////
    cout << "bucle for" << endl;
    int temp = n;
    int invertir = 0;
    int original = n;
    for (int i = 0; temp > 0; temp = temp / 10) {
        int d = temp % 10;
        invertir = invertir * 10 + d;
    }
    if (original == invertir) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No capicua" << endl;
    }
    
    ///////////////////////////////////////////////////
    cout << "bucle while" << endl;
    temp = n;
    invertir = 0;
    original = n;
    while (temp > 0) {
        int d = temp % 10;
        invertir = invertir * 10 + d;
        temp = temp / 10;
    }
    if (original == invertir) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No capicua" << endl;
    }
    
    ///////////////////////////////////////////////////
    cout << "bucle do while" << endl;
    temp = n;
    invertir = 0;
    original = n;
    if (temp > 0) {
        do {
            int d = temp % 10;
            invertir = invertir * 10 + d;
            temp = temp / 10;
        } while (temp > 0);
    }
    if (original == invertir) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No capicua" << endl;
    }
    
    return 0;
}
