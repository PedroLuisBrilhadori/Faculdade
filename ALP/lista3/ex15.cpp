/* 
Escreva um programa que receba dois números inteiros e 
que disponibilize as opções abaixo e imprima o resultado da operação
•A - retornar o soma de dois números;
•S - retornar a subtração de dois números;
•M - retornar a multiplicação de dois números;
•Q - retornar o quociente inteiro de uma divisão; 
•E - retornar mensagem de erro (opção inválida)
*/

#include <iostream>

using namespace std;

int main (){

    int n1, n2, result;
    char select;

    cout << "Insira um número inteiro: ";
    cin >> n1;
    cout << "Insira um número inteiro: ";
    cin >> n2;

    cout << "-------------------------------" << endl;
    cout << "           A = SOMA            " << endl;
    cout << "         S = SUBTRAÇÃO         " << endl;
    cout << "       M = MULTIPLICAÇÃO       " << endl;
    cout << "        Q = QUOCIENTE          " << endl;
    cout << "-------------------------------" << endl;
    cin >> select;

    switch (select)
    {
    case 'A':
        result = n1 + n2;
        break;
    case 'S':
        result = n1 - n2;
        break;
    case 'M':
        result = n1 * n2;
        break;
    case 'Q':
        result = n1 / n2;
        break;
    default:
        cout << "Opção inválida!" << endl;
        break;
    }

    if (select == 'A' || select == 'S' || select == 'M' || select == 'Q')
        cout << "Resultado: " << result << endl;

    return 0;
}