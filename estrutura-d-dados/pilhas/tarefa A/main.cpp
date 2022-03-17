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
    minhaPilha.empilhar(5);

    float media;
    minhaPilha.media(media);
    cout << "media: " << media << endl;
}