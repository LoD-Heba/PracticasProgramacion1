#include<iostream>
using namespace std;
/*
Escribir un programa para mostrar los primeros n mumeros primos
Un numero primo es aquel que es divisible por 1 y por si mismo
leer numero()
mostrar primos()
*/
int n;

void leerNumero() {
    cout << "Ingrese el valor de n: ";
    cin >> n;
}
bool esPrimo(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void mostrarPrimos() {
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
}
int main() {
    leerNumero();
    mostrarPrimos();
    return 0;
}