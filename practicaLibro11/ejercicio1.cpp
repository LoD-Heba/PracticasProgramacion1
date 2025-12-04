#include<iostream>
/*
Escribir un programa con cada metodo de strings:
    - Length()
    - size()
    - empty()
    - clear()
    - insert()
    - erase()
    - replace()
    - substr()
    - find()
    - rfind()
    - compare()
*/
#include <string>
using namespace std;

int main() {
    string texto = "Hola Mundo";

    //para contar la cantidad de caracteres
    cout << "length: " << texto.length() << endl;

    //para contar la cantidad de caracteres
    cout << "size: " << texto.size() << endl;

    //para verificar si la cadena esta vacia
    cout <<"empty: " << (texto.empty() ? "true" : "false") << endl;

    //para vaciar la cadena
    string c = texto;
    c.clear();
    cout << "clear: " << c << " cadena vacia" << endl;

    //para insertar una cadena en una posicion especifica
    string a = texto;
    cout << "insert: " << a.insert(5, "Hola ") << endl;

    //para eliminar una cadena en una posicion especifica
    string b = "Hola Mundo";
    cout << "erase: " << b.erase(5, 5) << endl; // elimina "Mundo"

    //para reemplazar una cadena en una posicion especifica
    string r = texto;
    cout << "replace: " <<r.replace(5, 5, "Hola") << endl;

    //para obtener una subcadena
    string sub = texto.substr(0, 4); // "Hola"
    cout << "substr: " << sub << endl;

    //para buscar una cadena
    if (texto.find("Muno")) {
        cout << "find: Se encontro la cadena" << endl;
    }
    else {
        cout << "find: No se encontro la cadena" << endl;
    }

    //para buscar una cadena desde el final
    string frase = "abc abc abc";
   if (frase.rfind("hola")) {
        cout << "rfind: Se encontro la cadena" << endl;
    }
    else {
        cout << "rfind: No se encontro la cadena" << endl;
    }

    //para comparar dos cadenas
    string x = "Hola";
    string y = "Holanda";
    if (x.compare(y) == 0) {
        cout << "compare: Las cadenas son iguales" << endl;
    }
    else {
        cout << "compare: Las cadenas no son iguales" << endl;
    }
    
    return 0;
}
