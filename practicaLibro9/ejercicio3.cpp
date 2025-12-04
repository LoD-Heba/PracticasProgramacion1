#include<iostream>
using namespace std;
/*Escribir un programa para insertar n elementos en un vector, seguidamente muestre su promedio*/
int main() {
    int n;
    cout << "Ingrese un valor: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un valor para vector["<<i+1<<"]: ";
        cin >> vector[i];
    }
    int promedio = 0;
    for (int i = 0; i < n; i++) {
        promedio = promedio + vector[i];
    }
    promedio = promedio / n;
    cout << "El promedio es: "<<promedio;
    cout << endl;
    return 0;
}