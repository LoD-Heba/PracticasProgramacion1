#include <iostream>
using namespace std;
/* Escribir un algoritmo para mostrar la sumatoria de los primeros n números naturales 
positivos impares. 
entrada: 6
salida: 36
*/
int main() {
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + 2*i-1;
    }
    cout << sum << endl;
    return 0;
}   