#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar la siguiente serie: 5, 7, 9, 5, 7, 9, 5, 7, 9, 5, …, etc.
entrada: 7
salida: 5 7 9 5 7 9 5
*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%3 == 1) {
            cout << 5 << " ";
        } else if (i%3 == 2) {
            cout << 7 << " ";
        } else {
            cout << 9 << " ";
        }
    }
    cout << endl;
    return 0;
}