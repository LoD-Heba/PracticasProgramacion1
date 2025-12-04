#include <iostream>
#include <cmath>
using namespace std;
/*Math*/
/*Escribir una funcion para calcular el area de un triangulo escaleno
area=sqrt(p(p-a)(p-b)(p-c)) donde p=(a+b+c)/2
*/
float area(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
    float a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << area(a, b, c)<<endl;
    return 0;
}
