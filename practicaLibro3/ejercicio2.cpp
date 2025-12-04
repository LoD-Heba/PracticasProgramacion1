#include <iostream>
using namespace std;
/*Escribir un programa para mostrar el correcpondiente numero romano de un numero entero n introducido por teclado.
El rango a mostrar solamente será de 1-10, si introduce cualquier otro número, 
se deberá mostrar el siguiente mensaje "No está en el rango"*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n >= 1 && n <= 10) {
        switch (n) {
            case 1: cout << "I" << endl; break;
            case 2: cout << "II" << endl; break;
            case 3: cout << "III" << endl; break;
            case 4: cout << "IV" << endl; break;
            case 5: cout << "V" << endl; break;
            case 6: cout << "VI" << endl; break;
            case 7: cout << "VII" << endl; break;
            case 8: cout << "VIII" << endl; break;
            case 9: cout << "IX" << endl; break;
            case 10: cout << "X" << endl; break;
        }
    } else {
        cout << "No está en el rango" << endl;
    }
    return 0;
}
