#include <iostream>
using namespace std;
/*De la práctica 8 y 9, codificar utilizando los 
tres tipos de bucles: while, for, do while
Ejercicio 8.7: Escribir un algoritmo para mostrar la cantidad de dígitos impares 
de un número n ingresado por teclado.*/

int main() {
    int n;
    cout << "Ingrese n: ";
     cin >> n;
    int sum1 = 0;

    cout << "bucle for" << endl;
    int temp1 = n;
    for (int i = 0; temp1 != 0; temp1 = temp1 / 10) {
        int d = temp1 % 10;
        if (d % 2 != 0) {
            sum1++;
        }
    }
    cout << sum1 << endl;

    cout << "bucle while" << endl;
    int temp2 = n;
    int sum2 = 0;
    while (temp2 != 0) {
        int d = temp2 % 10;
        if (d % 2 != 0) {
            sum2++;
        }
        temp2 = temp2 / 10;
    }
    cout << sum2 << endl;

    cout << "bucle do while" << endl;
    int temp3 = n;
    int sum3 = 0;
    if (temp3 != 0) {
        do {
            int d = temp3 % 10;
            if (d % 2 != 0) {
                sum3++;
            }
            temp3 = temp3 / 10;
        } while (temp3 != 0);
    }
    cout << sum3 << endl;
    
    return 0;
}
