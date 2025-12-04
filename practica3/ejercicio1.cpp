#include <iostream>
using namespace std;

int main() {
    int m=0, r, x;
    cout << "Ingrese el valor de r: ";
    cin >> r;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    m = x +(((r*1)-(r*2)) / (5+((r*2)+x)));
    cout << "El valor de m es: " << m<<endl;
    return 0;
}
