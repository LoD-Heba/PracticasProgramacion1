#include <iostream>
using namespace std;
//Leer horas h, minutos m, segundos s y mostrar total de segundos
int main() {
    int h, m, s;
    cout << "Ingrese las horas: ";
    cin >> h;
    cout << "Ingrese los minutos: ";
    cin >> m;
    cout << "Ingrese los segundos: ";
    cin >> s;
    //Calcular total de segundos
    int total = h*3600 + m*60 + s;
    cout << "El total de segundos es: " << total << endl;
    return 0;
}