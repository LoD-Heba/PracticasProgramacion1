#include <iostream>
#include <cmath>
/*
Escribir una función para calcular: 1-((pow(x, 2)/1!) + (pow(x, 3)/2!) + ... + (pow(x, n)/n!))
*/
using namespace std;

double factorial(int n){
    double resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}
double calcularF(double x, int n){
    double resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado = resultado - pow(x, i) / factorial(i);
    }
    return resultado;
}
int main() {
    
    double x;
    int terminos;
    
    cout << "X: ";
    cin >> x;
    cout << "Terminos: ";
    cin >> terminos;
    
    double resultado = calcularF(x, terminos);
    
    cout << resultado << endl;
    
    return 0;
}
