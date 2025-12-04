#include <iostream>
/*
Escribir un programa para leer una palabra por teclado, seguidamente muestre la cadena, pero de forma invertida.
*/
using namespace std;
int main() {
    string cadena;
    cout << "Ingrese un texto: ";
    cin >> cadena;
    for (int i = cadena.length() - 1; i >= 0; i--) {
        cout << cadena[i];
    }
    cout << endl;
    return 0;
}
