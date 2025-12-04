#include <iostream>
using namespace std;
/*Escribir un programa para leer numero entero n, seguidamente muestre lo siguiente
Entrada: 5
Salida:
54321
4321
321
21
1
*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
