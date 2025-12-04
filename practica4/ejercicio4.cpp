#include <iostream>
using namespace std;
/*Este año, el concurso tenía un problema intrigante: “El Desafío de los Tres Números”. 
Los participantes debían escribir un algoritmo que tomara cuatro valores como 
entrada (valor1, valor2, valor3, valor4) y calculara su promedio. Parecía un problema 
sencillo, pero ocultaba un detalle intrigante, al resultado final se le debe restar 1. 
Los concursantes se reunieron en el salón de la escuela nerviosos y emocionados. 
Una vez estando en salón se les dio a beber un jugo mágico que les hizo olvidar la 
fórmula para calcular el promedio. 
Ayuda a los habitantes de Algoritmia escribiendo el algoritmo para el concurso. 
Ejemplo: 
Si valor1=33, valor2=67, valor3=99, valor4=61 → entonces mostrar 64 
Si valor1=33, valor2=45, valor3=91, valor4=15 → entonces mostrar 45 
Si valor1=12, valor2=88, valor3=9, valor4=5 → entonces mostrar 27.5 */
int main() {
    int valor1, valor2, valor3, valor4;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    cout << "Valor 3: ";
    cin >> valor3;
    cout << "Valor 4: ";
    cin >> valor4;
    int promedio = (valor1 + valor2 + valor3 + valor4) / 4;
    cout << "Promedio: " << promedio - 1 << endl;
    return 0;
}