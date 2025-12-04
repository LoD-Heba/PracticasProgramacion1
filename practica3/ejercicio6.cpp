#include <iostream>
using namespace std;
//Calcular el área de un rectángulo
int main() {
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    //Calcular área
    int rectangulo = a*b;
    cout << "El área del rectángulo es: " << rectangulo << endl;
    return 0;
}