#include <iostream>
using namespace std;
/*Ejercicio 9.1: Escribir un algoritmo para mostrar la sumatoria de los dígitos de un 
número n ingresado por teclado.*/

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    
    ///////////////////////////////////////////////
    cout << "bucle for" << endl;
    int temp = n;
    int sum = 0;
    for (int i = 0; temp > 0; temp = temp / 10) {
        sum = sum + temp % 10;
    }
    cout << sum << endl;
    
    ///////////////////////////////////////////////
    cout << "bucle while" << endl;
    temp = n;
    sum = 0;
    while (temp > 0) {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    cout << sum << endl;
    
    ///////////////////////////////////////////////
    cout << "bucle do while" << endl;
    temp = n;
    sum = 0;
    if (temp > 0) {
        do {
            sum = sum + temp % 10;
            temp = temp / 10;
        } while (temp > 0);
    }
    cout << sum << endl;
    
    return 0;
}
