#include <iostream>
/*Escribir un programa insertar n elementos en un vector, seguidamente muestre los 
valores que no se repitan. */
using namespace std;
int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    int vector[n];
    cout << "Ingrese " << n << " elementos enteros: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
    for (int i = 0; i < n; i++) {
        bool repetido = false;
        for (int j = 0; j < i; j++) {
            if (vector[i] == vector[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            cout << vector[i] << " "<<endl;
        }
    }
    return 0;
}
