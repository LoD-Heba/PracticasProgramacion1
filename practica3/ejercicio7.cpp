#include <iostream>
using namespace std;
//Calcular el área de un triángulo
int main() {
    int base, altura;
    cout << "Ingrese el valor de la base: ";
    cin >> base;
    cout << "Ingrese el valor de la altura: ";
    cin >> altura;
    int areaTriangulo = (base*altura)/2;    
    cout << "El área del triángulo es: " << areaTriangulo << endl;
    return 0;
}