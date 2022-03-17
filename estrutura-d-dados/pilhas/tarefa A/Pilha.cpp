
#include "Pilha.h"


Pilha::Pilha() {
    contador = 0;
    capacidade = MAX;
}

bool Pilha::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::empilhar(int valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::desempilhar(int &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool Pilha::retornaTopo(int &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}

bool Pilha::invertePilha() {
    if(vazia()){
        return false;
    }
    

    int inverte[contador];
    
    for(int i = 0; i < contador; i++){
        inverte[i] = conteudo[contador - i -1];
    }

    for(int i = 0; i < contador; i++){
        conteudo[i] = inverte[i];
    }

    return true;
}

bool Pilha::maiorValor(int &valor){
    if(vazia()){
        return false;
    }
    valor = 0;

    for(int i = 0; i < contador; i++){
        valor = valor < conteudo[i] ? conteudo[i] : valor;
    }

    return true;
}

bool Pilha::menorValor(int &valor){
    if(vazia()){
        return false;
    }

    maiorValor(valor);

    for(int i = 0; i < contador; i++){
        valor = valor > conteudo[i] ? conteudo[i] : valor;
    }

    return true;
}


void Pilha::exibePilha() {
    if(vazia()){
        cout << "Pilha Vazia. \n";
        return;
    }
    
    cout << "Pilha: ";
    for(int i = 0; i < contador; i++) {
        cout << conteudo[i] << " "; 
    }

    cout << "\n";
}
