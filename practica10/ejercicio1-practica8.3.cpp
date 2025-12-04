#include <iostream>
using namespace std;
/*De la práctica 8 y 9, codificar utilizando los 
tres tipos de bucles: while, for, do while
Ejercicio 8.3: Escribir un algoritmo para mostrar los primeros n números de la sucesión Fibonacci (0,1).*/

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    ///////////////////////////////////////////////
    
    cout << "bucle for" << endl;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    ///////////////////////////////////////////////    
    cout << "bucle while" << endl;
    a = 0;
    b = 1;
    int i = 0;
    while (i < n) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
        i++;
    }
    cout << endl;
    
    ///////////////////////////////////////////////    
    cout << "bucle do while" << endl;
    a = 0;
    b = 1;
    i = 0;
    if (n > 0) {
        do {
            cout << a << " ";
            int c = a + b;
            a = b;
            b = c;
            i++;
        } while (i < n);
    }
    cout << endl;
    
    return 0;
}
