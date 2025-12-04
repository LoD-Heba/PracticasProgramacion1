#include <iostream>
using namespace std;
/* La heladería Dumbo requiere incorporar nuevos empleados a su equipo de trabajo. A 
un empleado se le paga por hora. La hora equivale a 20 bs. Si la cantidad de horas 
de un empleado supera a 40, entonces esas horas extra tienen un precio de 10 bs. 
Escribir un algoritmo para leer las horas(h) que trabajará un empleado, seguidamente 
calcule y muestre su salario.  
Programación I  ICEPAL: Sistemas informáticos 
 
Ejemplo:  
Si h=20 entonces el salario será de 400  
Si h=50 entonces el salario será de 900 .*/
int main() {
    int h;
    cout << "Ingrese las horas trabajadas: ";
    cin >> h;
    if (h > 40) {
        cout << "El salario es: " << h*20 + (h-40)*10 << endl;
    } else {
        cout << "El salario es: " << h*20 << endl;
    }
    return 0;
}   