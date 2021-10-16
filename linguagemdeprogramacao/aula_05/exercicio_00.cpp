#include <iostream> 
#include <iomanip>
#define TAM 10

using namespace std;


int menu(){
    int ops;

    cout << "---------------------------------\n";
    cout << "1 - push \n";
    cout << "2 - pop \n";
    cout << "3 - imprime pilha \n";
    cout << "9 - sair \n";
    cout << "---------------------------------\n";


    fflush(stdin);
    cin >> ops;

    return ops;
}


int main() {
    system("cls");
    int topo = -1, opcao;
    float vetor[TAM], valor;    
    char flag;

    do{
        opcao = menu();

        switch (opcao) {
        case 1: 
            cout << "\nInsira um valor para inserir na pilha: ";
            fflush(stdin);
            cin >> valor;

            if(topo < (TAM + 1)){
                topo++;
                vetor[topo] = valor;
                cout << "O valor: " << valor << " foi adicionado!\n\n";
            } else {
                cout << "\n\nA pilha já está cheia! \n";
            }
            break;
        case 2: 
            if(topo > -1){
                valor = vetor[topo];
                topo--;
                cout << "O valor: " << valor << " foi retirado do vetor. \n\n";
            } else {
                cout << "\n\nA pilha está vazia! \n\n";
            }
            break;
        case 3:
            if(topo > -1){
                cout << "\n\nPILHA: \n";
                cout << "\n| ";
                for(int i = 0; i <= topo; i++){
                    cout << vetor[i];
                    cout << " | ";
                }
                cout << "\n\n";
            }else {
                cout << "\n\nA pilha está vazia! \n\n";
            }
        default:
            cout << "\nOpção Inválida! \n";
            break;
        }
        
    }while(opcao != 9);


    return 0;
}