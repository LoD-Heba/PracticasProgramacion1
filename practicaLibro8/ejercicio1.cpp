#include <iostream>
using namespace std;
/*
Escribir un programa para mostrar el digito menor de un numero
leer numero()
calcular menor()
mostrar menor()
*/
int n;

void leerNumero() {
    cout << "Ingrese el valor de n: ";
    cin >> n;
}
int calcularMenor() {
    int menor = n % 10;
    n /= 10;
    while (n > 0) {
        if (n % 10 < menor) {
            menor = n % 10;
        }
        n /= 10;
    }
    return menor;
}
void mostrarMenor() {
    cout << "El menor es: "<<calcularMenor()<<endl;
}
int main() {
    leerNumero();
    mostrarMenor();
    return 0;
}
