#include <iostream>
using namespace std;
/*Escribir un algoritmo para mostrar los primeros n números naturales positivos, pero 
cuando un número sea divisible entre 3 mostrar: “fizz”, si un número es divisible 
entre 5 mostrar: “buzz”, y si un número es divisible entre 3 y 5 mostrar: 
“fizzbuzz”. */
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%3 == 0 && i%5 == 0) {
            cout << "fizzbuzz" << endl;
        } else if (i%3 == 0) {
            cout << "fizz" << endl;
        } else if (i%5 == 0) {
            cout << "buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}