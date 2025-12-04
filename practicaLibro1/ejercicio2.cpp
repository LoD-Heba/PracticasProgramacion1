#include <iostream>
using namespace std;
/*Escribir un programa para calcular y mostrar el area y volumen de un cilindro. El radio y altura se deberan leer por teclado.*/

int main() {
    double radio, altura;
    cout << "Radio: ";
    cin >> radio;
    cout << "Altura: ";
    cin >> altura;
    double area = 3.1416 * radio * radio;
    double volumen = 3.1416 * radio * radio * altura;
    cout << "Area: " << area << endl;
    cout << "Volumen: " << volumen << endl;
    
    return 0;
}
