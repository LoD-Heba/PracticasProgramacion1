#include <iostream>
using namespace std;
/*Escribir un programa para calcular y mostrar el area de un rectangulo.*/

int main() {
    double base, altura;
    cout << "Base: ";
    cin >> base;
    cout << "Altura: ";
    cin >> altura;
    double area = base * altura;
    cout << "Area: " << area << endl;
    
    return 0;
}
