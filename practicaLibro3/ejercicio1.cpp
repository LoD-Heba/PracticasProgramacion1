#include <iostream>
using namespace std;
/*Escribir un programa para mostrar los meses del año según sea un valor entero introducido por teclado. Ejemplo:
1=Enero, 2=Febrero, etc. Si n no pertenece al rango 1-12, mostrar un mensaje de error.*/
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n >= 1 && n <= 12) {
        switch (n) {
            case 1: cout << "Enero" << endl; break;
            case 2: cout << "Febrero" << endl; break;
            case 3: cout << "Marzo" << endl; break;
            case 4: cout << "Abril" << endl; break;
            case 5: cout << "Mayo" << endl; break;
            case 6: cout << "Junio" << endl; break;
            case 7: cout << "Julio" << endl; break;
            case 8: cout << "Agosto" << endl; break;
            case 9: cout << "Septiembre" << endl; break;
            case 10: cout << "Octubre" << endl; break;
            case 11: cout << "Noviembre" << endl; break;
            case 12: cout << "Diciembre" << endl; break;
        }
    } else {
        cout << "Error" << endl;
    }
    return 0;
}
