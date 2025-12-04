#include<iostream>
/*Escribir un programa para insertar datos en una matriz de n x n.
Seguidamente muestre las sumatorias de ambas diagonales*/
using namespace std;
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
    int sumDiagonalPrincipal = 0;
    int sumDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumDiagonalPrincipal += matriz[i][i];
        sumDiagonalSecundaria += matriz[i][n-i-1];
    }
    cout << "DiagonalPrincipal: "<<sumDiagonalPrincipal<<endl;
    cout << "DiagonalSecundaria: "<<sumDiagonalSecundaria<<endl;
    return 0;
}