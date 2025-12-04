#include <iostream>
#include <cmath>
using namespace std;
/*Math*/
/*Escribir un programa para calcular la tangente de un numero x introducido por teclado*/
int main() {
    float x;
    cout << "Ingrese un numero: ";
    cin >> x;
    float tangente = tan(x);
    cout << tangente<<endl;
    return 0;
}