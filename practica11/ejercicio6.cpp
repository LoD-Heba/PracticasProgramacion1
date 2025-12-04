#include <iostream>
#include <cmath>
/*
Escribir una función para calcular el área de un triángulo escaleno. 
s = (a + b + c) / 2.0
area sqrt(s * (s - a) * (s - b) * (s - c))
*/
using namespace std;
double calcularArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    double a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "El area del triangulo es: " << calcularArea(a, b, c) << endl;
    return 0;
}