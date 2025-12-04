#include<iostream>
using namespace std;
/*
Escribir un programa para insertar 10 elementos enteros en un vector, seguidamente muestre
sus elementos desde la ultima posicion hasta la primera
*/
int main() {
    int vector[10];
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el valor ["<<i+1<<"]: ";
        cin >> vector[i];
    }
    for (int i = 9; i >= 0; i--) {
        cout << vector[i] << " ";
    }
    cout << endl;
    return 0;
}