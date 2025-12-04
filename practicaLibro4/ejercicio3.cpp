#include <iostream>
using namespace std;
/*Escribir un programa para mostrar el digito menor de un numero n introducido por teclado
Ejemplo:
Entrada: 412   ------- Salida 1*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int menor = n % 10;
    while (n != 0) {
        if (n % 10 < menor) {
            menor = n % 10;
        }
        n = n / 10;
    }
    cout << menor<<endl;
    
    return 0;
}
