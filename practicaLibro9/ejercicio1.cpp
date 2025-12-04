#include<iostream>
using namespace std;
/*
Escribir un programa para insertar 10 elementos enteros en un vecto, seguidamente muestre
sus elementos impares
*/
int main() {

    int vector[10];
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el valor de vector["<<i<<"]: ";
        cin >> vector[i];
    }
    for (int i = 0; i < 10; i++) {
        if (vector[i] % 2 != 0) {
            cout << vector[i] << " ";
        }
    }
    return 0;
}