#include <iostream>
using namespace std;
#define MAX 5

#include "Pilha.cpp"
#include "PilhaChar.cpp"

int main() {
    Pilha minhaPilha;
    int recebeValor;
    minhaPilha.empilhar(10);
    minhaPilha.empilhar(-1);
    minhaPilha.empilhar(100);
    minhaPilha.empilhar(1);

    int maior;  
    minhaPilha.maiorValor(maior);
    cout << "maior valor: " << maior << endl;

    int menor;  
    minhaPilha.menorValor(menor);
    cout << "menor valor: " << menor << endl;
}