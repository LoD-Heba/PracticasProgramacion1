#include <iostream>
using namespace std;
/*
Escribir un programa para mostrar de forma invertida los digitos de un numero
leer numero()
invertir digitos()
mostrar numero()
*/
int n;

void leerNumero() {
    cout << "Ingrese el valor de n: ";
    cin >> n;
}
int invertirDigitos() {
    int invertido = 0;
    while (n != 0) {
        invertido = invertido * 10 + n % 10;
        n = n / 10;
    }
    return invertido;
}
void mostrarNumero() {
    cout << "El numero invertido es: "<<invertirDigitos()<<endl;
}
int main() {
    leerNumero();
    mostrarNumero();
    return 0;
}