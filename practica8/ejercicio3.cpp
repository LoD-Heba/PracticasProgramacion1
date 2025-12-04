#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar los primeros n números de la sucesión Fibonacci. */
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
    cout << endl;
    return 0;
}
