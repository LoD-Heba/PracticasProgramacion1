#include <iostream>
/*Escribir una función para retornar el menor de dos números. */
using namespace std;
int retornarMenor(int a, int b){
    if (a < b) {
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
    cout << "El menor es: " << retornarMenor(a, b) << endl;
    return 0;
}