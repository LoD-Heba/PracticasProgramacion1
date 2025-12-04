#include <iostream>
using namespace std;
/*Escribir un programa para saber si un número n introducido por teclado es “Oblongo” 
o “No oblongo”. Un número oblongo es el resultado de la multiplicación consecutiva 
de dos números, por ejemplo 56 es oblongo, pero 8 no lo es */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    bool esOblongo = false;
    for (int i = 1; i * (i+1) <= n; i++) {
       if(i * (i+1) == n) {
           esOblongo = true;
       }
    }
    if (esOblongo) {
        cout << "Oblongo" << endl;
    } else {
        cout << "No Oblongo" << endl;
    }
    
    return 0;
}
