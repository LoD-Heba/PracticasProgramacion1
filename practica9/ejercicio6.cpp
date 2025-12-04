#include <iostream>
using namespace std;
/*Un número capicúa es número que se lee igual de izquierda a derecha y de derecha 
a izquierda. Por ejemplo, los números 121, 3443, y 12321 son capicúas. 
Escribir un algoritmo para saber si un número n ingresado por teclado es capicúa o 
no lo es. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    int invertir = 0;
    int original = n;
    while (n != 0) {
        int d = n%10;
        invertir = invertir * 10 + d;
        n = n / 10;
    }   
    if (original == invertir) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No capicua" << endl;
    }
    return 0;
}