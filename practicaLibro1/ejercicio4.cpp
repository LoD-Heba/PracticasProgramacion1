#include <iostream>
using namespace std;
/*Escribir un programa para calcular el area de un cuadrado*/
int main() {
    double lado;
    cout << "Lado: ";
    cin >> lado;
    double area = lado * lado;
    cout << "Area: " << area << endl;
    
    return 0;
}
