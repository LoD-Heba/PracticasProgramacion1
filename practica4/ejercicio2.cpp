#include <iostream>
using namespace std;
/*Escribir un algoritmo para leer un valor f. El valor f corresponde a grados Fahrenheit, 
convierta f a grados Celsius y muestre el resultado. */
int main() {
    float f, c;
    cout << "Fahrenheit: ";
    cin >> f;
    c = (f-32)*5/9;
    cout << "Celsius: " << c << "C" << endl;
    return 0;
}
