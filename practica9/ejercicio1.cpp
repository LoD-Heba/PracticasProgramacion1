#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar la sumatoria de los dígitos de un número n 
ingresado por teclado. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    int sum = 0;
    while (n != 0) {
        sum = sum + n%10;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}
