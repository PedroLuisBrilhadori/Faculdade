// se x < 1 | 4 - x²
// se x = 1 | 2
// se x > 1 | 2 + x²

#include <iostream>

using namespace std;

int main () {

    float x, b;

    cout << "Insira o valor de x: ";
    cin >> x;

    if(x > 1)
        b = 2 + (x * x);
    else 
        if (x < 1)
            b = 4 - (x * x);
        else 
            if (x == 1)
                b = 2;

    cout << "Valor de x é: " << b << endl;
    return 0;
}