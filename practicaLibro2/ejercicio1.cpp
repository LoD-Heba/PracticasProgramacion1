#include <iostream>
using namespace std;
/*Escribir un programa para mostrar el mayor de tres numeros introducidos por teclado*/
int main() {
    int num1, num2, num3;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    cout << "Num3: ";
    cin >> num3;
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    cout << "El mayor es: " << mayor << endl;
    
    return 0;
}
