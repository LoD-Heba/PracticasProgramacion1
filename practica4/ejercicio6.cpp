#include <iostream>
using namespace std;
/*
Si a=10, b=4, c=-2, d=11. Determinar si las siguientes expresiones dan como 
resultado falso (F) o verdadero (V):
1) (𝑎 == 10 𝑦 𝑏 == 4 − 1) 𝑜 (𝑐 < 0 𝑜 𝑑 == 10 + 1) - - - 
2) (6 / 2 ∗ (2 + 1)) == 𝑎 − 1 𝑦 (𝑑 + 𝑐) > 5  
3) 𝑜(𝑛𝑜(𝑛𝑜(𝑐 > 0)) 𝑜 𝑎 + 𝑑 == 21) 
4) (𝑎 + 𝑏≥ 14 𝑦 𝑏≤ 4) 𝑦 ((𝑏 + 𝑏) != 8) 𝑦 𝑛𝑜((𝑐 + (𝑐 ∗ −1)) == 0)
*/
int main() {
    int a=10, b=4, c=-2, d=11;
    cout << "1) " << ((a == 10 && b == 4 - 1) || (c < 0 || d == 10 + 1))<<endl;
    cout << "2) " << ((6 / 2 * (2 + 1)) == a - 1 && (d + c) > 5)<<endl;
    cout << "3) " << (!(c > 0) || a + d == 21)<<endl;
    cout << "4) " << ((a + b >= 14 && b <= 4) && (b + b != 8) && !(c + (c * -1) == 0))<<endl;
    return 0;
}