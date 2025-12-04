#include <iostream>
using namespace std;
/*Ejercicio 9.8: Un número repdigit es aquel que tiene todos sus dígitos iguales, por ejemplo: 111. 
Si un número solo tiene un dígito también se lo considera repdigit. 
Escribir un algoritmo para saber si un número n ingresado por teclado es repdigit o no es.*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    
    cout << "bucle for" << endl;
    int temp = n;
    int d = n % 10;
    bool esRepdigit = true;
    for (int i = 0; temp > 0; temp = temp / 10) {
        if (d != temp % 10) {
            esRepdigit = false;
        }
    }
    if (esRepdigit) {
        cout << "Es repdigit" << endl;
    } else {
        cout << "No repdigit" << endl;
    }
    
    cout << "bucle while" << endl;
    temp = n;
    d = n % 10;
    esRepdigit = true;
    while (temp > 0) {
        if (d != temp % 10) {
            esRepdigit = false;
        }
        temp = temp / 10;
    }
    if (esRepdigit) {
        cout << "Es repdigit" << endl;
    } else {
        cout << "No repdigit" << endl;
    }
    
    cout << "bucle do while" << endl;
    temp = n;
    d = n % 10;
    esRepdigit = true;
    if (temp > 0) {
        do {
            if (d != temp % 10) {
                esRepdigit = false;
            }
            temp = temp / 10; 
        } while (temp > 0);
    }
    if (esRepdigit) {
        cout << "Es repdigit" << endl;
    } else {
        cout << "No repdigit" << endl;
    }
    
    return 0;
}
