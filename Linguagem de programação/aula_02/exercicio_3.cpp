/* 
Escreva um programa que leia três medidas e informe se as medidas formam um triângulo. 
Se formar, indique o tipo de triângulo: 
Isósceles dois lados iguais, escaleno todos os lados diferentes e equilátero todos os lados iguais.

Considere:
Para construir um triângulo é necessário que a medida de qualquer um dos lados
seja menor que a soma das medidas dos outros dois 
e maior que o valor absoluto da diferença entre essas medidas.

*/

#include <iostream> 
#include <windows.h>
#include <math.h>

using namespace std;

int main() {
    int codigoBR = 65001;
    int codigoPadrao = GetConsoleOutputCP();

    SetConsoleOutputCP(codigoBR);

    float a, b, c, soma;
    bool triangulo = false;

    cout << "Insira os lados do triângulo: \n";
    cin >> a >> b >> c;

    if(a < (b + c) && a > fabs(b - c))
        triangulo = true;
    else 
        if(b < (a + c) && b > fabs(a - c))
            triangulo = true;
        else 
            if (c < (a + b) && c > fabs(a - b))
                triangulo = true;
            else
                triangulo = false;

    if(triangulo){
        if(a == b && b == c)
            cout << "temos um triângulo equilátero \n";
        else 
            if(a == b || b == c || c == a)
                cout << "temos um triângulo isósceles \n";
            else 
                if(a != b && b != c)
                    cout << "temos uma triângulo escaleno \n";
    } else 
        cout << "não é um triângulo \n";


    SetConsoleOutputCP(codigoPadrao);
    return 0;
}