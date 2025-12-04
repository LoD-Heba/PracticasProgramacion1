#include <iostream>
/*Escribir una función para retornar el mayor de tres números. */
using namespace std;
int retornarMayor(int a, int b, int c){
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int a, b, c;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;
    cout << "El mayor es: " << retornarMayor(a, b, c) << endl;
    return 0;
}