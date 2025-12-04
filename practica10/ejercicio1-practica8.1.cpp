#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar la siguiente serie: 9, 7, 5, 9, 7, 5, 9, 7, 5, …, etc. */

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    ///////////////////////////////////////////////
    cout << "bucle for" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << 9 << " ";
        } else {
            cout << 7 << " ";
        }
    }
    cout << endl;
    ///////////////////////////////////////////////
    cout << "bucle while" << endl;
    int i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            cout << 9 << " ";
        } else {
            cout << 7 << " ";
        }
        i++;
    }
    cout << endl;
    ///////////////////////////////////////////////
    cout << "bucle do while" << endl;
    i = 1;
    if (n > 0) {
        do {
            if (i % 2 != 0) {
                cout << 9 << " ";
            } else {
                cout << 7 << " ";
            }
            i++;
        } while (i <= n);
    }
    cout << endl;
    ///////////////////////////////////////////////
    return 0;
}
