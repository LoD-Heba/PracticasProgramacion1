#include <iostream>
using namespace std;
/*De la práctica 8 y 9, codificar utilizando los 
tres tipos de bucles: while, for, do while
Ejercicio 8.5: Escribir un algoritmo para mostrar la cantidad de dígitos de un número n 
ingresado por teclado.*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    ///////////////////////////////////////////////
    
    cout << "bucle for" << endl;
    int temp = n;
    int cant = 0;
    for (int i = 0; temp != 0; i++) {
        temp = temp / 10;
        cant++;
    }
    cout<< cant << endl;
    
    ///////////////////////////////////////////////    
    cout << "bucle while" << endl;
    temp = n;
    cant = 0;
    while ( temp != 0) {
        temp = temp / 10;
        cant++;
    }
    cout<< cant << endl;
    
    ///////////////////////////////////////////////    
    cout << "bucle do while" << endl;
    temp = n;
    cant = 0;
    if (temp != 0) {
        do {
            temp = temp / 10;
            cant++;
        } while (temp != 0);
    }
    cout<< cant << endl;
    
    return 0;
}
