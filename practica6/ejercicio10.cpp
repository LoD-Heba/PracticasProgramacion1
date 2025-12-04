#include <iostream>
using namespace std;
/* . Exámenes 
En Cartmanland, existen n escuelas y en cada escuela existen m estudiantes. 
Es fin de año y los resultados ya están disponibles, en total z estudiantes aprobaron 
los exámenes. 
 
Asumiendo que todos los estudiantes se presentaron a los exámenes, escribir un 
algoritmo para determinar si el número de estudiantes que aprobaron en Cartmanland 
fue estrictamente mayor al 50%. 
 
Entrada 
Los valores a introducir son tres: n, m, z. 
 
Salida 
Muestre en pantalla yes si el número total de estudiantes que aprobaron en 
Cartmanland fue estrictamente mayor al 50%. De lo contrario, muestre no. 
 
Ejemplo:  
Si n=2, m=10 y z=12 → entonces mostrar yes 
Si n=2, m=10 y z=3 → entonces mostrar no 
Si n=1, m=5 y z=3 → entonces mostrar yes 
Si n=3, m=6 y z=9 → entonces mostrar no */
int main() {
    int n, m, z;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "Ingrese m: ";
    cin >> m;
    cout << "Ingrese z: ";
    cin >> z;
    int total = n*m;
    if (z > total/2) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}   