#include <iostream>
using namespace std;
/*Escribir un programa para leer tres valores enteros desde teclado, seguidamente indicar
si uno de los valores divide a los otros dos exactamente*/
int main() {
    int num1, num2, num3;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    cout << "Num3: ";
    cin >> num3;
    if (num1 % num2 == 0 && num1 % num3 == 0) {
        cout << num1<<" divide a "<<num2<<" y "<<num3<<endl;
    } else if (num2 % num1 == 0 && num2 % num3 == 0) {
        cout << num2<<" divide a "<<num1<<" y "<<num3<<endl;
    } else if (num3 % num1 == 0 && num3 % num2 == 0) {
        cout << num3<<" divide a "<<num1<<" y "<<num2<<endl;
    } else {
        cout << "No divide" << endl;
    }
    return 0;
}
