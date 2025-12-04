#include <iostream>
using namespace std;
/*Escribir un algoritmo para leer un valor s. El valor s representa un tiempo expresado 
en segundos. Seguidamente convierta s a horas, minutos y segundos. 
Ejemplo: 
Si s = 60 → entonces mostrar 0 1 0 
Ya que en 60 segundos existen: 0 horas, 1 minuto y 0 segundos 
Si s = 99999 → entonces mostrar 27 46 39 
Ya que en 99999 segundos existen: 27 horas, 46 minutos y 39 segundos 
Si s = 3600 → entonces mostrar 1 0 0 
Ya que en 3600 segundos existen: 1 hora, 0 minutos y 0 segundos */
int main() {
    int s;
    cout << "Segundos: ";
    cin >> s;
    int horas = s/3600;
    int minutos = (s%3600)/60;
    int segundos = s%60;
    cout << horas <<" | "<< minutos <<" | "<< segundos << endl;
    return 0;
}
