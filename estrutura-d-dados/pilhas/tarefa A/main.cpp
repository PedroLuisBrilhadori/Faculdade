#include <iostream>
using namespace std;
#define MAX 5

#include "Pilha.cpp"
#include "PilhaChar.cpp"

int main() {
    Pilha minhaPilha;
    int recebeValor;
    minhaPilha.empilhar(10);
    minhaPilha.empilhar(9);
    minhaPilha.empilhar(5);
    minhaPilha.empilhar(2);
    minhaPilha.empilhar(3);

    int valores[MAX];
    int quantidade = 0;
    if (minhaPilha.impares(valores, quantidade)) {

        cout << "Valores impares: ";
        for (int i = 0; i < quantidade; i++) {
            cout << valores[i] << " ";
        }
        cout << "\n";
    }

}