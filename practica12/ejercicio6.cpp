#include <iostream>
/*Escribir una función para retornar la cantidad de dígitos de un número. */
using namespace std;
int retornarCantidadDigitos(int n){
    int cantidad = 0;
    while (n != 0) {
        n = n / 10;
        cantidad++;
    }
    return cantidad;
}
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "La cantidad de digitos es: " << retornarCantidadDigitos(n) << endl;
    return 0;
}