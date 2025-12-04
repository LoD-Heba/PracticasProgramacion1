#include <iostream>
#include <cmath>
using namespace std;
/*Math*/
/*Escribir una funcion para calcular: f(x) = x/2 + sqrt((x^n)/n)*/
float f(float x, int n) {
    return x/2 + sqrt((pow(x, n)) / n);
}
int main() {
    float x;
    int n;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese n: ";
    cin >> n;
    cout << f(x, n)<<endl;
    return 0;
}