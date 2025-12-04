#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar los primeros n números naturales positivos 
impares. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            cout << i << endl;
        }
    }
    return 0;
}   
