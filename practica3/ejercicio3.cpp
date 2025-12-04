#include <iostream>
using namespace std;
//invertir valores sin auxiliar
int main() {
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    //Invertir valores
    a = a + b;
    b = a - b;
    a = a - b;
    //Mostrar valores invertidos
    cout << "El valor de a es: " << a << endl;
    cout << "El valor de b es: " << b << endl;
    return 0;
}
