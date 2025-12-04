#include <iostream>
using namespace std;
/*Escribir un programa para insertar 10 elementos enteros en un vector, seguidamente 
muestre la sumatoria de sus elementos. */
int main() {
    int vector[10];
    for (int i = 0; i < 10; i++) {
        cin >> vector[i];
    }
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma = suma + vector[i];
    }
    cout << suma << endl;
    return 0;
}