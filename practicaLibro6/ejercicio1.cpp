#include <iostream>
#include <cmath>
using namespace std;
/*Math*/
/*Escribir un programa para calcular el seno de un numero x introducido por teclado*/
int main() {
    float x;
    cout << "Ingrese un numero: ";
    cin >> x;
    float seno = sin(x);
    cout << seno<<endl;
    return 0;
}
