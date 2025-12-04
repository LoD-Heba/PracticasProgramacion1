#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar la cantidad de dígitos pares de un número n 
ingresado por teclado. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    int sum = 0;
    while (n != 0) {
        int d = n%10;
        if (d%2 == 0) {
            sum++;
        }
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}