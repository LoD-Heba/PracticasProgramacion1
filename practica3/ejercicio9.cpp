#include <iostream>
using namespace std;
/* Escribir un algoritmo para leer una variable (gal), que representa la cantidad de 
galones de gasolina que ingresan en una gasolinera, seguidamente calcule la 
ganancia total por los galones de gasolina introducidos, sabiendo que el precio por 
litro de gasolina es de 3.74 Bs. */
int main() {
    float galones, precioPorLitro, Ganancias;
    cout << "Galones: ";
    cin >> galones;
    precioPorLitro = 3.74;
    Ganancias = galones * precioPorLitro;
    cout << "Ganancias: " << Ganancias << "Bs" << endl;
    return 0;
}