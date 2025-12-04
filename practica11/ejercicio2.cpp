#include <iostream>
using namespace std;
#include <math.h>

float calcular(float x){
    float funcion = sqrt(pow(x,3))/0.2;
    return funcion;
}

int main() {
    float x;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "El resultado es: " << calcular(x) << endl;
    return 0;
}
