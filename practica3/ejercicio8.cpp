#include <iostream>
using namespace std;
//Calcular cambio de una compra
int main() {
    int precio, pago, cambio;
    cout << "Precio: ";
    cin >> precio;
    cout << "Pago: ";
    cin >> pago;
    cambio = pago - precio;
    cout << "Cambio: " << cambio << endl;
    return 0;
}