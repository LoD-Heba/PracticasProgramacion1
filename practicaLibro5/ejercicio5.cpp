#include <iostream>
using namespace std;
/*Do while*/
/*Escribir un programa para mostrar el digito mayor de un numero n introducido por teclado*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int mayor = n % 10;
    do {
        if (n % 10 > mayor) {
            mayor = n % 10;
        }
        n = n / 10;
    } while (n != 0);
    cout << mayor<<endl;
    return 0;
}
