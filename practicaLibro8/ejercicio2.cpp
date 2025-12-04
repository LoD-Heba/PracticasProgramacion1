#include <iostream>
using namespace std;
/*
Escribir un programa para mostrar el factorial de un numero
leer numero()
calcular_factorial()
mostrar_factorial()
*/

int n; 

void leerNumero() {
    cout << "Ingrese el valor de n: ";
    cin >> n;
}
int calcular_factorial() {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
    
}
void mostrar_factorial() {
    cout << "El factorial es: "<<calcular_factorial()<<endl;
}
int main() {
    leerNumero();
    mostrar_factorial();
    return 0;
}