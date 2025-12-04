#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar la sumatoria de los primeros n números naturales 
positivos pares. 
entrada: 6
salida: 42
*/
int main() {
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + 2*i;
    }
    cout << sum << endl;
    return 0;
}   
