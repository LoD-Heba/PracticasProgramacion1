#include <iostream>
using namespace std;
/*
    Escribir un algoritmo para saber si un número n ingresado por teclado es múltiplo de 
5. Si n es múltiplo de 5, entonces mostrar el mensaje: “Es múltiplo de 5”, de lo 
contrario no realice ninguna acción.    
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num % 5 == 0) {
        cout << "Es multiplo de 5" << endl;
    }
    return 0;
}