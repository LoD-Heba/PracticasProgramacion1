#include <iostream>
/*Escribir una función para retornar el factorial de un número. */
using namespace std;
int retornarFactorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "El factorial es: " << retornarFactorial(n) << endl;
    return 0;
}
