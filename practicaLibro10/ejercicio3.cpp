#include<iostream>
/*Escribir un programa para insertar datos en una matriz de n x n.
Seguidamente muestre la diagonal principal*/
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
    for (int i = 0; i < n; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;
    return 0;
}