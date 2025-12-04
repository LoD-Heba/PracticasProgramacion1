#include <iostream>
using namespace std;
/*Escribir un programa para leer cuatro calificaciones por teclado, seguidamente calcule el promedio
y finalmente indique si tiene una de "Aprobado" o "Reprobado". La nota de aprobación es 61.*/

int main() {
    int cal1, cal2, cal3, cal4;
    cout << "Cal1: ";
    cin >> cal1;
    cout << "Cal2: ";
    cin >> cal2;
    cout << "Cal3: ";
    cin >> cal3;
    cout << "Cal4: ";
    cin >> cal4;
    int promedio = (cal1 + cal2 + cal3 + cal4) / 4;
    if (promedio >= 61) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }
    
    return 0;
}
