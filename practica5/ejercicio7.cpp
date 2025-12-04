#include <iostream>
using namespace std;
/*
    Escribir un algoritmo para saber si un número n ingresado por teclado es múltiplo de 
3 y 5. Si n es múltiplo de 3 y 5, entonces mostrar el mensaje: “Es múltiplo de 3 y 5”, 
de lo contrario no realice ninguna acción. Pude ser que n sea negativo, si es caso 
utilice el valor absoluto n.    
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num < 0 ) {
        num = -num;
    }
    if (num % 3 == 0 && num % 5 == 0) {
        cout << "Es multiplo de 3 y 5" << endl;
    }
    return 0;
}   