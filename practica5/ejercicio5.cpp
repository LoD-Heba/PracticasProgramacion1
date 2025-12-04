#include <iostream>
using namespace std;
/*
    Escribir un algoritmo para saber si un número n ingresado por teclado es múltiplo de 
    3. Si n es múltiplo de 3, entonces mostrar el mensaje: “Es múltiplo de 3”, de lo 
    contrario no realice ninguna acción. 
    */
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num % 3 == 0) {
        cout << "Es multiplo de 3" << endl;
    }
    return 0;
}