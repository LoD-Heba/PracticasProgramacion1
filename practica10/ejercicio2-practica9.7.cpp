#include <iostream>
using namespace std;
/*Ejercicio 9.7: Escribir un algoritmo para mostrar los primeros n números naturales positivos, 
pero cuando un número sea divisible entre 3 mostrar: 
"fizz", si un número es divisible entre 5 mostrar: "buzz", 
y si un número es divisible entre 3 y 5 mostrar: "fizzbuzz".*/

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    
    ///////////////////////////////////////////////////
    cout << "bucle for" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << " fizzbuzz ";
        } else if (i % 3 == 0) {
            cout << " fizz ";
        } else if (i % 5 == 0) {
            cout << " buzz ";
        } else {
            cout << i << " ";
        }
    }
    cout << endl;
    
    ///////////////////////////////////////////////////
    cout << "bucle while" << endl;
    int i = 1;
    while (i <= n) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << " fizzbuzz ";
        } else if (i % 3 == 0) {
            cout << " fizz ";
        } else if (i % 5 == 0) {
            cout << " buzz ";
        } else {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    
    ///////////////////////////////////////////////////
    cout << "bucle do while" << endl;
    i = 1;
    if (n > 0) {
        do {
            if (i % 3 == 0 && i % 5 == 0) {
                cout << " fizzbuzz ";
            } else if (i % 3 == 0) {
                cout << " fizz ";
            } else if (i % 5 == 0) {
                cout << " buzz ";
            } else {
                cout << i << " ";
            }
            i++;
        } while (i <= n);
    }
    cout << endl;
    
    return 0;
}
