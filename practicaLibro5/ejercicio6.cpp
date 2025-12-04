#include <iostream>
using namespace std;
/*Do while*/
/*Escribir un programa para mostrar el digito menor de un numero n introducido por teclado */
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int menor = n % 10;
    do {
        if (n % 10 < menor) {
            menor = n % 10;
        }
        n = n / 10;
    } while (n != 0);
    cout << menor<<endl;
    return 0;
}