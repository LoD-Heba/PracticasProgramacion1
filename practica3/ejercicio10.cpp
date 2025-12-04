#include <iostream>
/*Escribir un algoritmo para calcular en número de segundos que existen en n días, n 
introducido por teclado. */
using namespace std;
int main() {
    int dias;
    cout << "Ingrese los dias: ";
    cin >> dias;
    int segundos = dias * 24 * 60 * 60;
    cout << "Segundos: " << segundos << "segundos" << endl;
    return 0;
}
