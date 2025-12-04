#include <iostream>
using namespace std;
#include <cmath>
/*Escribir una función para calcular: 1/2(x^2)*/
float calcular(float x) {
    return 1/(2*(pow(x,2)));
}
int main() {
    float x;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "El resultado es: " << calcular(x) << endl;
    return 0;
}