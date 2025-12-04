#include <iostream>
/*Escribir una función para retornar true si un número n es par y false si es impar. */
using namespace std;
    bool esPar(int n){
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    if (esPar(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}