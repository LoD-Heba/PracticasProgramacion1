#include <iostream>
using namespace std;
/*
Entrada 
El valor a introducir será un número x. El valor de x necesariamente debe tener 
solamente dos dígitos, ya que ambos dígitos representan los poderes de los dos 
nuevos superhéroes. Si x no cumple esta regla, no debe realizarse ninguna acción.  
Salida 
Por cada número x mostrar en pantalla la suma de sus poderes. 
Ejemplos: 
Si x = 45 → entonces mostrar 9 
Si x = 55 → entonces mostrar 10 
Si x = 99 → entonces mostrar 18 
Si x = 2 → entonces no realizar ninguna acción 
Si x = 212 → entonces no realizar ninguna acción 
Si x = 5422 → entonces no realizar ninguna acción 
Etc.   
*/
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num >= 10 && num <= 99) {
        cout << "La suma de los digitos es: " << num/10 + num%10 << endl;
    }
    return 0;
}