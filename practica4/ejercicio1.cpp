#include <iostream>
using namespace std;
/* */
int main() {
  int c, r, t, m;
  cout << "Ingrese el valor de c: ";
  cin >> c;
  cout << "Ingrese el valor de r: ";
  cin >> r;
  cout << "Ingrese el valor de t: ";
  cin >> t;
  m = ((1+r/t)/100) *c;
  int i=m-c; 
  cout << "El valor de i es: " << i << endl;
  cout << "El valore de m es: " << m << endl;
    return 0;
}
