#include <iostream> 
#define TAM 10

using namespace std;

int menu(){
    int ops;

    cout << "---------------------------------\n";
    cout << "1 - inserir \n";
    cout << "2 - remover \n";
    cout << "3 - imprir\n";
    cout << "9 - sair \n";
    cout << "---------------------------------\n";


    fflush(stdin);
    cin >> ops;

    return ops;
}


int main() {
    system("cls");

    int fim = -1, opcao;
    float vetor[TAM], valor;    
    char flag;


    do {
        opcao = menu();

        switch (opcao) {
        case 1:
            cout << "\nInsira um valor para inserir na fila: ";
            fflush(stdin);
            cin >> valor;

            if(fim < (TAM + 1)){
                fim++;
                vetor[fim] = valor;
                cout << "O valor: " << valor << " foi adicionado!\n\n";
            } else {
                cout << "\n\nA pilha já está cheia! \n";
            }
            break;

        case 2: 
            if(fim > -1){
                for(int i = 0; i < fim; i++){
                    vetor[i] = vetor[i + 1];
                }
                fim--;
                cout << "\nElemento " << " removido com sucesso!\n";
            }else {
                cout << "Não é possivel executar a operação!\n";
            }
            break;

        case 3: 
            if(fim > -1){
                cout << "\n\nFILA: \n";
                cout << "| ";
                
                for(int i = 0; i <= fim; i++){
                    cout << vetor[i] << " | ";
                }
                cout << "\n\n";
            }else {
                cout << "Não é possivel executar a opeação!\n";
            }
            break;

        default:
            cout << "Opção inválida, tente novamente!\n"; 
            break;
        }

    } while(opcao != 9);


    return 0;
}
