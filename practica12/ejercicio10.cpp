#include <iostream>
/*Los relojes mecánicos utilizan manecillas para mostrar la hora los minutos y los segundos.

Reloj

El reloj es forma circular y todo circulo tiene 360 grados sexagesimales. Se desea conocer en que posición en grados sexagesimales se encuentran las manecillas del reloj en un determinado tiempo.

Entrada
La entrada consiste en dos números enteros h y m (0 ≤ h < 24) (0 ≤ m < 60) donde h es la hora, m los minutos de un determinado tiempo.

Salida
Imprimir en que ángulo se encuentran las manecillas del reloj en el tiempo ingresado, especificando el ángulo del horero y el minutero en ese orden y separados por un espacio.

Ejemplos
Input:
23 59

Output:
330 354
Input:
12 00

Output:
0 0
Input:
16 47

Output:
120 282*/

using namespace std;
int main() {
    int h, m;
    cout << "Ingrese la hora: ";
    cin >> h;
    cout << "Ingrese los minutos: ";
    cin >> m;
    int horero = (h * 30) + (m * 0.5);
    int minutero = m * 6;
    
    cout <<"El angulo del horero es: "<< horero << " y el angulo del minutero es: "<< minutero<<endl;
    
    return 0;
}
