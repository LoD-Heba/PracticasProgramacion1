#include <iostream>
using namespace std;
/*
Escribir una funcion para retornar true si un numero es entero es curioso y false cuando el numero no sea curioso
Un numero curioso es aquel que elevado al cuadrado sus ultimos digitos es el mismo numero
*/
bool esCurioso(int n) {
    int cuadrado = n * n;
    int copia = n;

    int potencia10 = 1;
    while (copia > 0) {
        potencia10 =potencia10 * 10;
        copia = copia / 10;
    }

    return (cuadrado % potencia10) == n;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esCurioso(numero))
        cout << "Es curioso.\n";
    else
        cout << "No es curioso.\n";

    return 0;
}
