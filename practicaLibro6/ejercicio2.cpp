#include <iostream>
#include <cmath>
using namespace std;
/*Math*/
/*Escribir un programa para calcular el coseno de un numero x introducido por teclado*/
int main() {
    float x;
    cout << "Ingrese un numero: ";
    cin >> x;
    float coseno = cos(x);
    cout << coseno<<endl;
    return 0;
}
