#include<iostream>
using namespace std;
/*
Escribir un programa para insertar datos en una matriz de n x n(n filas y n columnas por teclado). 
seguidamente muestre la sumatoria de elementos de la matriz
*/
int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese un valor para matriz["<<i<<"]["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }
    int sumatoria = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumatoria += matriz[i][j];
        }
    }
    cout << "La sumatoria es: "<<sumatoria<<endl;
    return 0;
}