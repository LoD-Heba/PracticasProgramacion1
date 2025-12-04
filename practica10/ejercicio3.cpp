#include <iostream>
using namespace std;
/*
existen parejas que ... Wow merecen un 100 inevitablemente!

Entrada

La entrada contiene varias líneas, cada línea contiene un número entero entre 1 y 99 inclusive. 
La entrada termina cuando encuentras un 0.

Salida

Por cada línea de entrada se debe generar una línea de salida con un número que muestre 
la pareja perfecta de la entrada que amerite un “Wow merecen un 100 inevitablemente”.

Ejemplo de entrada

4
56
78
23
0

Ejemplo de salida

96
44
22
77*/
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    while (n != 0) {
        cout << (100 - n) << endl;
        cin >> n;
    }
    return 0;
}
