#include <iostream>
using namespace std;
/*
Escribir un algoritmo para mostrar el mensaje: “Es neutro” cuando un número n 
ingresado por teclado sea neutro (cero). De lo contrario no realice ninguna acción.  
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num == 0) {
        cout << "Es neutro" << endl;
    }
    return 0;
}
