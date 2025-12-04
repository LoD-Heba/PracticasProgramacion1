#include <iostream>
using namespace std;
/*Escribir un programa para leer dos valores enteros desde teclado seguidamente indicar si la suma
de ambos valores es "impart" o "par"*/
int main() {
    int num1, num2;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    int suma = num1 + num2;
    if (suma % 2 == 0) {
        cout << "Par" << endl;
    } else {
        cout << "Impar" << endl;
    }
    
    return 0;
}
