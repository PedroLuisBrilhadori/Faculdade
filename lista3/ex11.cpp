// Faça e um programa que, dados três números inteiros, os imprima em ordem crescente

#include <iostream>

using namespace std;

int main () {

    int n1, n2, n3, aux;

    cout << "Insira três números inteiros:" << endl;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n2 > n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    if (n1 <= n2 && n2 <= n3){
        cout << "Os números em ordem crescente ficam: " << endl;
        cout << n1 << " " << n2 << " " << n3 << endl;
    } else
        cout << "Erro :?" << endl;

    return 0;
}