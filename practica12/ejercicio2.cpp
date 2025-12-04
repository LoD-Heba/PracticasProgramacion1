#include <iostream>
using namespace std;
/*Escribir una función para retornar el mayor de dos números. */
int retornarMayor(int a, int b){
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int a, b;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "El mayor es: " << retornarMayor(a, b) << endl;
    return 0;
}