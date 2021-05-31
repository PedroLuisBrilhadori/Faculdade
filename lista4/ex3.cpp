/*
A conversão de graus F - C = 5 / 9 (f - 32)

Faça um algoritmo que calcule e escreva uma tabela de centígrados
em função de graus Farenheit, que variam de 50 a 150 de 1 em 1
*/

#include <iostream>
#include <iomanip>


using namespace std;

int main () {

    int i, F;
    float C, aux; 

    C = 0;
    F = 50;

    cout << "-----------------------------------" << endl;

    cout << setprecision(4);

    for (i = 50; i <= 150; i++){
        
        C = 5.0/9 * (i - 32); 

        if (i <= 99)
            cout << "F = " << i << "   |  " << "C = " << C << endl;
        else
            cout << "F = " << i << "  |  " << "C = " << C << endl;
    }

    cout << "-----------------------------------" << endl;

    return 0;
}
