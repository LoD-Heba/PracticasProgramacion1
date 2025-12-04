#include <iostream>
using namespace std;
/* Escribir un algoritmo para leer números por teclado (a y b), seguidamente muestre la 
multiplicación de ambos números sin utilizar el operador multiplicador ‘*’. */
int main() {
    int a, b;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    int sum = 0;
    for (int i = 1; i <= b; i++) {
        sum += a;
    }
    cout << sum << endl;
    return 0;
}