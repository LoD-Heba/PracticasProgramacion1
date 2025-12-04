#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar la siguiente serie: 9, 7, 5, 9, 7, 5, 9, 7, 5, …, etc.*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            cout << 9 << " ";
        } else {
            cout << 7 << " ";
        }
    }
    cout << endl;
    return 0;
}
