#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar los primeros n números naturales incluido el cero. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cout << i << endl;
    }
    return 0;
}   
