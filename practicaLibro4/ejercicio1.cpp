#include <iostream>
using namespace std;
/*Escribir un programa para mostrar los primeros n numero naturales positivos impares con while
Ejemplo:
Entrada
4
Salida
1
3
5
7
*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i * 2 - 1 << endl;
        i++;
    }
    return 0;
}
