/* 
  Escreva um programa para calcular o delta e as raízes de uma função de segundo grau.
    
    Delta = b*b-4*a*c
    X1=(b-+raiz(Delta)/(2*a)
    X2=(b-+raiz(Delta)/(2*a)
*/

#include <iostream> 
#include <math.h>

using namespace std;


int main() { 

    float a, b, c, delta, x1, x2; 

    cout << "Insira o valor de a: ";
    fflush(stdin);
    cin >> a;
    cout << "Insira o valor de b: ";
    fflush(stdin);
    cin >> b;
    cout << "Insira o valor de c: ";
    fflush(stdin);
    cin >> c;

    delta =  (b * b) - (4 * a * c);

    cout << delta << endl;

    if(b < 0){
        x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        x2 = ((b * -1) - sqrt(delta)) / (2 * a);
    }else {
        x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        x2 = ((b * -1) - sqrt(delta)) / (2 * a);
    }

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}