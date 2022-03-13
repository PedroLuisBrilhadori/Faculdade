#include <iostream>
using namespace std;
#define MAX 5

#include "Pilha.cpp"
#include "PilhaChar.cpp"

int main() {
    Pilha minhaPilha;
    int recebeValor;
    minhaPilha.empilhar(1);
    minhaPilha.empilhar(3);
    minhaPilha.empilhar(4);

    cout << "antes: \n";
    minhaPilha.exibePilha();

    minhaPilha.invertePilha();
    cout << "depois: \n";
    minhaPilha.exibePilha();
}