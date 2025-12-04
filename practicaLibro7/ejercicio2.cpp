#include <iostream>
#include <cmath>
using namespace std;
/*Math*/
/*Escribir una funcion para calcular: f = 1/pow(x, 5)((pow(e, 1.43/x)-1))*/
float f(float x, float e) {
    return 1/pow(x, 5)*((pow(e, 1.43/x)-1));
}
int main() {
    float x;
    float e;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese e: ";
    cin >> e;
    cout << f(x, e)<<endl;
    return 0;
}