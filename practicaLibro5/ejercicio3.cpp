#include <iostream>
using namespace std;
/*Escribir un programa para mostrar el correspondiente factorial de un numero n introducido por teclado */
/*Un numero factorial es el producto de todos los numeros enteros positivos menores o iguales a n*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << factorial<<endl;
    return 0;
}
