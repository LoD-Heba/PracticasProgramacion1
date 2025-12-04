#include <iostream>
/*
Escribir un programa para saber si una cadena es palindromo o no lo es.
Una palabra palindromo es aquella que se lee igual de izquierda a derecha que de derecha a izquierda.
*/
using namespace std;
int main() {
     string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool esPalindromo = true;
    int i = 0;
    int j = palabra.size() - 1;

    while (i < j) {
        if (palabra[i] != palabra[j]) {
            esPalindromo = false;
            break;
        }
        i++;
        j--;
    }

    if (esPalindromo)
        cout << "Es palindromo." << endl;
    else
        cout << "No es palindromo." << endl;

    return 0;
}