#include <iostream>
using namespace std;
/*Escribir un programa para realizar el cálculo de : sumar, restar, multiplicar, dividir dos valores 
introducidos por teclado mediante el siguiente menú
**********Menú**********
1. Sumar
2. Restar
3. Multiplicar
4. Dividir
5. Salir
.*/
int main() {
    int operacion;
    float num1, num2;
    cout << "**********Menú**********" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> operacion;
    switch (operacion) {
        case 1: 
        cout << "Ingrese el primer numero: "; cin >> num1; 
        cout << "Ingrese el segundo numero: "; cin >> num2; 
        cout << "La suma es: " << num1 + num2 << endl; 
        break;
        case 2: 
        cout << "Ingrese el primer numero: "; cin >> num1; 
        cout << "Ingrese el segundo numero: "; cin >> num2; 
        cout << "La resta es: " << num1 - num2 << endl; 
        break;
        case 3: 
        cout << "Ingrese el primer numero: "; cin >> num1; 
        cout << "Ingrese el segundo numero: "; cin >> num2; 
        cout << "La multiplicacion es: " << num1 * num2 << endl; 
        break;
        case 4: 
        cout << "Ingrese el primer numero: "; cin >> num1; 
        cout << "Ingrese el segundo numero: "; cin >> num2; 
        cout << "La division es: " << num1 / num2 << endl; 
        break;
        case 5: break;
        default: cout << "Opcion invalida" << endl; break;
    }
    return 0;
}
