#include <iostream> 
#include <iomanip>
#include <string>
#define TAM 4

using namespace std;

int matriz[TAM][TAM];

int menu() {
    int ops;
    cout << "--------------------------------------------------------\n";
    cout << "1 - Carga da Matriz" << endl;
    cout << "2 - Mostra Matriz" << endl;
    cout << "3 - Somatória da diagonal secundária" << endl;
    cout << "4 - Números pares da diagonal secundária" << endl;
    cout << "5 - Somatória da diagonal principal" << endl;
    cout << "6 - Diferença das somatórias" << endl;
    cout << "99 - Sair" << endl;
    cout << "--------------------------------------------------------\n";
    
    
    fflush(stdin);
    cin >> ops;
    system("cls");

    return ops;
}

void mostra_matriz() {
    cout << "--------------------------------------------------------\n"; 
    for(int i = 0; i < TAM; i++){
        for (int b = 0; b < TAM; b++){
            cout << setw(10) <<  matriz[i][b] << " ";
        }
        cout << endl;
    }
}


void mostra_resultado(double resultado, string operacao){
    cout << "--------------------------------------------------------\n"; 
    cout << "A " << operacao << " retornou: " << resultado << endl;
}

int main() {
    system("chcp 65001");
    system("cls");


    int result;


    do{
        result = menu();
        switch (result){
        case 1:
            // carga da matriz
            int aux;
            for(int i = 0; i < TAM; i++){
                for(int b = 0; b < TAM; b++){
                    cout << "insira o número " << i + 1 << " x " << b + 1 << ": ";
                    fflush(stdin);
                    cin >> aux;
                    matriz[i][b] = aux;
                }
            }
            system("cls");
            mostra_matriz();
            cout << "Matriz Carregada!\n";
            break;
        case 2:
            //mostra matriz 
            mostra_matriz();
            break; 
        case 3:
            // soma diagonal secundaria
            float soma_diagonalS;
            soma_diagonalS = 0;
            for(int i = 0, b = TAM - 1; i < TAM; i++){
                soma_diagonalS += matriz[i][b];
                b--;
            }
            mostra_resultado(soma_diagonalS, string("soma da diagonal secundaria"));
            break;
        case 4: 
            // soma elementos pares da diagonal secundaria
            float soma_pares;
            soma_pares = 0;
            for(int i = 0, b = TAM - 1; i < TAM; i++){
                if((matriz[i][b] % 2) == 0)
                    soma_pares += matriz[i][b];
                b--;
            }
            mostra_resultado(soma_pares, string("soma dos numeros pares da diagonal secundaria"));
            break;
        case 5:
            // soma diagonal principal 
            float soma_diagonalP;
            soma_diagonalP = 0;
            for(int i = 0; i < TAM; i++){
                soma_diagonalP += matriz[i][i];
            }
            mostra_resultado(soma_diagonalP, string("soma da diagonal principal"));
            break;
        case 6: 
            // diferenca da diagonal princial pela secundaria
            soma_diagonalS = soma_diagonalP = 0;
            
            for(int i = 0, b = TAM - 1; i < TAM; i++){
                soma_diagonalS += matriz[i][b];
                b--;
            }
                
            for(int i = 0; i < TAM; i++){
                soma_diagonalP += matriz[i][i];
            }
            mostra_resultado((soma_diagonalP - soma_diagonalS), string("diferenca da somatoria principal pela secundaria"));
            break;
        }
    }while(result != 99);

    // system("chcp 850");
    system("cls");
    return 0;
}