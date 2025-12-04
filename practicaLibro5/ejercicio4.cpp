#include <iostream>
using namespace std;
/*DO WHILE*/
/*Escribir un programa para mostrar los primeros n numeros naturales positivos impares*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int i = 1;
    do {
        cout << i << endl;
        i += 2;
    } while (i <= n);
    return 0;
}
