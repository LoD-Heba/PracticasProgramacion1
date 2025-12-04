#include <iostream>
#include <cmath>
/*
Escribir una función para calcular: 
(1/2)+(2/3)+(3/4)+...+(n/n+1)
*/
using namespace std;
double calcularF(int n) {
    double resultado = 0;
    for (int i = 1; i <= n; i++) {
        resultado += (double)i / (i + 1);
    }
    return resultado;
}
int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "El resultado es: " << calcularF(n) << endl;
    return 0;
}