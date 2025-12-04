#include <iostream>
#include <cmath>

/*
Escribir una funcion para calcular:
Si x >= 0 
x + pow(x, n) / (n + n) - pow(x, n) / (n - 2);
Si x < 0 
x - pow(x, n) / (n - 2) + pow(x, n) / (n + 2);
*/
using namespace std;

double calcularF(double x, int n) {
    if (x >= 0) {
        return x + (pow(x, n) / (n + n)) - (pow(x, n) / (n - 2));
    } else {
        return x - (pow(x, n) / (n - 2)) + (pow(x, n) / (n + 2));
    }
}
int main() {
    double x, n;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "El resultado es: " << calcularF(x, n) << endl;
    return 0;
}
