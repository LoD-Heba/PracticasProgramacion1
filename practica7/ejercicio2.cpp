#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar los primeros n números naturales positivos pares. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 2; i <= n; i+=2) {
        cout << i << endl;
    }
    return 0;
}
