#include "Recursao.h"

Recursao::Recursao() {
    par = false;
}

string Recursao::contagemCrescente(int p) {
    // Receba um valor N e retorne os valores de 1 até N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui

    string sequencia;

    if(p > 0){
        sequencia = contagemCrescente(p - 1) + "[" + to_string(p) + "]";
    }

    return sequencia;
}

int Recursao::fatorial(int p) {
    // Receba um valor N e efetue o cálculo de seu fatorial;
    // Seu código aqui

    int retorno;
    
    if (p == 1 or p == 0)
        retorno = 1;
    else
        retorno = p * fatorial(p - 1);

    return retorno;
}

string Recursao::contagemDecrescente(int p) {
    // Receba um valor N e retorne os valores de N até 1 (decrescente);
    // No formato:
    // -4-3-2-1-
    // Seu código aqui


    string sequencia;

    if(p > 0){
        sequencia = "[" + to_string(p) + "]" + contagemDecrescente(p - 1);
    }

    return sequencia;

}


string Recursao::intervaloCrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui

    string intervalo;

    if(p > q){
        return "";
    };


    if(p < q){
        intervalo = intervaloCrescente(p, q -1) + "[" + to_string(q)  + "]";
    }

    if(p == q)
        intervalo += "[" + to_string(q)  + "]";

    return intervalo;

}

string Recursao::intervaloDecrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem decrescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    
    string intervalo;

    if(p < q){
        return "";
    }

    if(p > q){
        intervalo = "[" + to_string(p)  + "]" + intervaloDecrescente(p -1, q);
    }

    if(p == q)
        intervalo += "[" + to_string(p)  + "]";

    return intervalo;

}

string Recursao::paresCrescente(int p) {
    // Receba um valor N par e retorne todos os números pares entre 0 e N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string sequencia;

    if ((p % 2) == 0 and par == false){
        par = true;
    }

    if(!(par == true) or !(p >= 0)){
        par = false;
        return "";
    }

    sequencia += paresCrescente(p - 1);
    
    if( p >= 0 and (p % 2) == 0)
        sequencia +=  "[" + to_string(p) + "]";

    return sequencia;
}

