#include <iostream>
using namespace std;
/*
Utilizando la funcion curioso del problema anterior, muestre los primeros n numeros curiosos
-un mumero curioso es aquel que elevado al cuadrado sus ultimos digitos es el mismo numero
*/
bool esCurioso(int n) {
    int cuadrado = n * n;
    int copia = n;

    int potencia10 = 1;
    while (copia > 0) {
        potencia10 *= 10;
        copia /= 10;
    }

    return (cuadrado % potencia10) == n;
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int encontrados = 0;
    int numero = 1;

    cout << "Primeros " << n << " numeros curiosos: " << endl;

    while (encontrados < n) {
        if (esCurioso(numero)) {
            cout << numero << " ";
            encontrados++;
        }
        numero++;
    }

    cout << endl;
    return 0;
}
