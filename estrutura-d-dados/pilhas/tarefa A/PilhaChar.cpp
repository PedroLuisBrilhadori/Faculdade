#include "PilhaChar.h"


PilhaChar::PilhaChar() {
    contador = 0;
    capacidade = MAX;
}

bool PilhaChar::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool PilhaChar::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool PilhaChar::empilhar(char valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool PilhaChar::desempilhar(char &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;    
}

bool PilhaChar::retornaTopo(char &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}