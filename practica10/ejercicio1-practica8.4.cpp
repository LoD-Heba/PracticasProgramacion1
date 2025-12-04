#include <iostream>
using namespace std;
/*De la práctica 8 y 9, codificar utilizando los 
tres tipos de bucles: while, for, do while
Ejercicio 8.4: Escribir un algoritmo para saber si un número n ingresado es primo o no es primo.*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    ///////////////////////////////////////////////
    
    cout << "bucle for" << endl;
    bool primo = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = false;
        }
    }
    if (primo && n > 1) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }
    
    ///////////////////////////////////////////////    
    cout << "bucle while" << endl;
    primo = true;
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            primo = false;
        }
        i++;
    }
    if (primo && n > 1) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }
    
    ///////////////////////////////////////////////    
    cout << "bucle do while" << endl;
    primo = true;
    i = 2;
    if (i < n) {
        do {
            if (n % i == 0) {
                primo = false;
            }
            i++;
        } while (i < n);
    }
    if (primo && n > 1) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }
    
    ///////////////////////////////////////////////    
    return 0;
}
