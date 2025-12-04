#include <iostream>
/*Escribir un programa para contar cuantas vocales tiene una cadena
sin espacios introducidos por teclado
*/
using namespace std;
int main() {
    string cadena;
    cout << "Ingrese un texto: ";
    cin >> cadena;
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == 'a' 
            || cadena[i] == 'e' 
            || cadena[i] == 'i' 
            || cadena[i] == 'o' 
            || cadena[i] == 'u') {
            contador++;
        }
    }
    cout << contador << " Vocales"<< endl;
    return 0;
}
