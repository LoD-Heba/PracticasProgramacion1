#include<iostream>
using namespace std;
/*Escribir un programa para insertar n elementos en un vector, seguidamente ordene y
muestre sus datos de forma descendente*/
int main() {
    int n;
    cout << "Ingrese un valor: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un valor para vector["<<i+1<<"]: ";
        cin >> vector[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vector[i] < vector[j]) {
                int aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    return 0;
}