#include <iostream>
/*Escribir un programa para insertar n elementos enteros en un vector, seguidamente 
ordene (ascendentemente) y muestre los valores. */
using namespace std;
int main() {
    int n;
    cout << "Ingrese n: "<<endl;
    cin >> n;
    int vector[n];
    cout << "Ingrese " << n << " elementos enteros: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vector[i] > vector[j]) {
                int temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " "<<endl;
    }
    cout<<endl;
    return 0;
}