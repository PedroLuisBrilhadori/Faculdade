#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "Fila.cpp"

//  Implemente um programa que implemente uma fila de impressão. 
//  Para cada arquivo a ser impresso devem ser armazenados: 
//  - id sequencial da impressão (começando em 1)
//  - nome do arquivo
//  - quantidade de folhas
//  Exceto o id sequencial, as outras informações devem ser digitadas pelo 
//  usuário. O programa também deve realizar um controle 
//  da quantidade de papel disponível na impressora, permitindo que o usuário 
//  realize a “inserção” de mais papel. Antes de inserir um novo documento na 
//  fila, o programa deve verificar se há papel suficiente na impressora para 
//  realizar a impressão. Se não houver papel suficiente, o programa não deve 
//  aceitar a impressão. Desenvolva métodos que:
//    a.	Permita inserir um arquivo na fila de impressão (retornar falso caso não haja papel);
//    b.	Remova um arquivo da fila da impressão (imprimir);
//    c.	Liste os arquivos da fila de impressão;
//    d.	Permita inserir mais folhas na impressora;
//    e.	Retorne o total de folhas disponíveis na impressora

// Podem realizar testes inserindo valores pré definidos.
// Podem implementar um menu com as operações.
// Podem enviar ao pgrader para correção.

// Boa prova a todos!

string menu(int folhas, int arquivos) {
    string txtMenu = "";

    txtMenu += "\n\tIMPRESORA - MENU\n";
    txtMenu += "1  - Inserir arquivo na fila de impressão\t\t FOLHAS: " + to_string(folhas) + "\n";
    txtMenu += "2  - Remover arquivo da fila\t\t\t\t ARQUIVOS: " + to_string(arquivos) + "\n";
    txtMenu += "3  - Adicionar folhas\n";
    txtMenu += "4  - Listar fila de impressão\n";
    txtMenu += "5  - Listar quantidade de folhas\n";
    txtMenu += "99 - Sair\n";

    return txtMenu;
}


int main() {


    int id, qntFolhas;
    string nome; 

    int opcao; 
    Fila minhaFilha; 

    minhaFilha.inserirFolhas(10);
    minhaFilha.inserir("pedro", 1);

    do {
        cout << menu(minhaFilha.listarFolhas(), minhaFilha.qntDeArquivos()); 
        cin >> opcao;

        switch(opcao){

            case 1: 
     

                cout << "Insira o nome do arquivo: ";
                cin >> nome; 
                cout << "Insira a quantidade de folhas do arquivo: ";
                cin >> qntFolhas;

                if(minhaFilha.inserir(nome, qntFolhas))
                    cout << "Arquivo inserido na fila de impressão\n";
                else 
                    cout << "Arquivo não inserido na fila. Verifique a quantidade de folhas\n";
            break;

            case 2:
                if(minhaFilha.remover(id, nome, qntFolhas))
                    cout << "Arquivo: " << id << " - " << nome << " - " << qntFolhas << endl;
                else 
                    cout << "Arquivo não removido. Verifique a quantidade de arquivos na fila\n";
            break;

            case 3:
                cout << "Insira a quantidade de folhas que deseja inserir: "; 
                fflush(stdin);
                cin >> qntFolhas; 
                minhaFilha.inserirFolhas(int(qntFolhas));
            break;

            case 4:
                cout << minhaFilha.listar() << endl; 
            break;

            case 5:
                cout << minhaFilha.listarFolhas() << endl;
            break;

        }   

    } while(opcao != 99); 
    

}