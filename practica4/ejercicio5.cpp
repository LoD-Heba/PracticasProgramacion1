#include <iostream>
using namespace std;
/*Si a=5, b=30, c=-3. Determinar si las siguientes expresiones dan como resultado 
falso (F) o verdadero (V)
1) ≥ 𝑏 𝑦 𝑎≥ 𝑐 
2) ≥ 𝑎 𝑦 𝑏≥ 𝑐 
3)(𝑛𝑜(𝑛𝑜(𝑛𝑜(𝑐 > 0)) 𝑜 𝑏 + 𝑐 == 7)) 𝑦 1 == 1 𝑦 𝑛𝑜(𝐹 𝑜 𝑉) */
int main() { 
    int a=5, b=30, c=-3;
    cout << "1) " << (b >= a && a >= c) << endl;
    cout << "2) " << (a >= b && b >= c) << endl;
    cout << "3) " << ((!(c > 0) || b + c == 7) && 1 == 1 && !(false || true))<<endl;

    return 0;
}