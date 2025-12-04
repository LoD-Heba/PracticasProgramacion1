#include <iostream>
using namespace std;
//Invertir valores usando auxiliar
int main() {
    int a, b, aux;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    //Invertir valores
    aux = a;
    a = b;
    b = aux;
    //Mostrar valores invertidos
    cout << "El valor de a es: " << a << endl;
    cout << "El valor de b es: " << b << endl;
    return 0;
}
