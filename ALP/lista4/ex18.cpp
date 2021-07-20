#include <iostream> 

using namespace std;

int main() {

    int i, inscricao, campeao, maior;
    float padrao, padrao1, padrao2, padrao3, pontos, total, aux, tempo;

    maior = 0;

    cout << "Insira o tempo padrão 1: ";
    cin >> padrao1;
    cout << "Insira o tempo padrão 2: ";
    cin >> padrao2;
    cout << "Insira o tempo padrão 3: ";
    cin >> padrao3;

    for (inscricao = 0; inscricao != 9999;){
        cout << "----------------------------------" << endl;
        cout << "Insira o número da inscrição: ";
        cin >> inscricao;

        pontos = total = 0;

        if (inscricao != 9999){

            for (i = 0; i <= 2; i++){
                cout << "Etapa número: " << i + 1 << endl;
                cout << "Insira o tempo gasto na etapa: ";
                cin >> tempo;

                switch (i)
                {
                case 0:
                    padrao = padrao1;
                    break;
                
                case 1: 
                    padrao = padrao2;
                    break;
                
                case 2:
                    padrao = padrao3;
                    break;
                }
                
                aux = tempo - padrao;
                
                if (aux < 3){
                    pontos = 100;
                } else
                    if(aux >= 3 && aux <= 5){
                        pontos = 80;
                    } else
                        pontos = 80 - ((aux -5)/5);
            }

            cout << "A equipe: " << inscricao << " obteve: " << pontos << " na etapa: " << i << endl;

            total += pontos; 
            cout << "Total de pontos da equipe: " << inscricao << " igual a: " << total << endl;
        
        }

        if (total > maior){
            campeao = inscricao;
        }
    }

    cout << "----------------------------------" << endl;
    cout << "A equipe campea foi a equipe: " << campeao << endl;

    return 0;
}