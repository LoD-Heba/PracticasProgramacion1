#include <iostream>
using namespace std;
/*Escribir un programa para mostrar el digito mayor de un numero n introducido por teclado
Ejemplo:
Entrda: 412   ------- Salida 4*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int mayor = n % 10;
    while (n != 0) {
        if (n % 10 > mayor) {
            mayor = n % 10;
        }
        n = n / 10;
    }
    cout << mayor<<endl;
    return 0;
}
