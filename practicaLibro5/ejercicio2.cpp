#include <iostream>
using namespace std;
/* Escribir un programa para mostrar los primero n numeros de la sucesion de fibonacci*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
