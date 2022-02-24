#include <iostream>
#include <string> 
using namespace std;

#include "funcoes.h"

int main() {
    // Implemente os seus testes aqui.
    // Eles não serão avaliados pelo corretor automático
    // cout << "3 + 9 = " << calculadora(3, 9, '-')  << endl;
        
    calculadora(3, 8, '+');
    calculadora(9, 3, '-');
    calculadora(9, 3, '*');
    calculadora(9, 3, '/');
    calculadora(9, 3, '-');


    cout << listaHistorico() << endl;

    // cout << "9 - 3 = " << calculadora(9, 3, '-') << endl;

    // cout << "9 * 3 = " << calculadora(9, 3, '*') << endl;

    // cout << "9 / 3 = " << calculadora(9, 3, '/') << endl;

    // cout << "Histórico: \n" << listaHistorico() << endl; 
}
