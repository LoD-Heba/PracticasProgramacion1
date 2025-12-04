#include <iostream>
using namespace std;
/*
Escribir un algoritmo para mostrar el mensaje: “Es mayor a 5” cuando un número n 
ingresado por teclado sea mayor a 5. De lo contrario no realice ninguna acción.
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num > 5) {
        cout << "Es mayor a 5" << endl;
    }
    return 0;
}
