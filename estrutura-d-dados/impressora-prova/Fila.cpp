#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
    contador = 1;
    folhas = 0; 
    arquivos = 0;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(string nomeArquivo, int qntFolhas) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:

    if(folhas < qntFolhas)
        return false;

    PonteiroElemento p;
    p = new elemento;

    p->id = contador++;
    p->nome = nomeArquivo;
    p->qntFolhas = qntFolhas;
    folhas -= qntFolhas;
    arquivos++;

    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &id, string &nome, int &qntFolhas) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    id = inicio->id;
    nome = inicio->nome;
    qntFolhas = inicio->qntFolhas;
    
    folhas += qntFolhas;
    arquivos -= 1;

    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar() {
	// Implementar listagem da fila de impressão;
    // Retornar string no formato:
	// <idImpressao1> - <nomeArquivo1> - <folhas1>\n
	// <idImpressao2> - <nomeArquivo2> - <folhas2>\n
	//
	// Seu código aqui	

    if(vazia())
        return "";

    int i, f;
    string n, items = "";
    PonteiroElemento item;

    item = inicio;

    while(item != NULL){

        items += to_string(item->id) + " - " + item->nome + " - " + to_string(item->qntFolhas) + "\n";
        item = item->proximoElemento;
    }


    items.pop_back();

    return items;


}

bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui	


    folhas += auxFolhas; 

    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui

    return folhas;
}

int Fila::qntDeArquivos() {

    return arquivos;
}

