#include <iostream>
using namespace std;
/*Escribir un programa para mostrar el primer digito de un numero n introducido por teclado 
Ejemplo:
Entrada: 412   ------- Salida 4*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int primer_digito = n;
    while (primer_digito >= 10) {
        primer_digito = primer_digito / 10;
    }
    cout << primer_digito;
    
    return 0;
}
