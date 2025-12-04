#include <iostream>
using namespace std;
/*Un número repdigit es aquel que tiene todos sus dígitos iguales, por ejemplo: 111. Si 
un número solo tiene un dígito también se lo considera repdigit. Escribir un algoritmo 
para saber si un número n ingresado por teclado es repdigit o no es. */
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int original = n;
    int d = n%10;
    while (n != 0) {
        if (d != n%10) {
            cout << "No repdigit" << endl;
            return 0;
        }
        n = n / 10;
    }
    cout << "Es repdigit" << endl;
    return 0;
}