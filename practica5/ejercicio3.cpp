#include <iostream>
using namespace std;
/*
Escribir un algoritmo para mostrar el mensaje: “Tiene más de dos dígitos” cuando un 
número n ingresado por teclado tenga más de dos dígitos. De lo contrario no realice 
ninguna acción.
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num >= 10) {
        cout << "Tiene mas de dos digitos" << endl;
    }
    return 0;
}
