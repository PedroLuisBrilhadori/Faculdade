#include <iostream>
#include "Fila.cpp"


//	Altere a classe que implementa a fila adicionando os seguintes m�todos:
//  a.	Um m�todo primeiro que deve retornar o primeiro elemento da fila;
//  b.	Um m�todo �ltimo que deve retornar o �ltimo elemento da fila;
//  c.	Um m�todo esvaziar que remova todos os elementos da fila;
//  d.	Um m�todo tamanho que retorne o tamanho atual da fila;
//  e.	Um m�todo inverter que inverta a ordem dos elementos atuais da fila;
//  f.	Um m�todo listar que retorne um vetor contendo todos os elementos da fila;
//  g.	Um m�todo que verifica se um dado valor se encontra na fila;
//  h.	Um m�todo que receba uma lista e retorne a intersec��o com essa lista;
//  i.	Um m�todo que receba uma lista e retorne a uni�o com essa lista;
//
// Implementar utilizando sempre somente os met�dos inserir e remover.


using namespace std;

bool adicionaItems(int quant, Fila &minhaFila){
    for(int i = 0; i < quant; i++){
        minhaFila.inserir(i);
    }
    return true;
}

int main() {
    Fila minhaFila, fila01, fila02;
    int x, y;

    adicionaItems(2, minhaFila);

    minhaFila.primeiro(x);
    cout << "Primeiro:\n";
    cout << "\tPrimeiro item: " << x << endl;
    cout << "\n";

    minhaFila.ultimo(x);
    cout << "Ultimo:\n";
    cout << "\tUltimo item: " << x << endl;
    cout << "\n";

    
    minhaFila.inverter();    

    cout << "Inverte: \n";
    
    minhaFila.primeiro(x);
    cout << "\tPrimeiro item: " << x << endl;
    cout << "\n";

    minhaFila.ultimo(x);
    cout << "\tUltimo item: " << x << endl;
    cout << "\n";

    minhaFila.esvaziar();

    cout << "vazia:\n";
    if(minhaFila.vazia())
        cout << "\tpilha vazia \n";
    else 
        cout << "\tPilha com items \n";
    cout << "\n";
    
    adicionaItems(5, minhaFila);

    cout << "Tamanho:\n";
    cout << "\tTamanho da fila: " << minhaFila.tamanho() << endl;
    cout << "\n";

    
}
