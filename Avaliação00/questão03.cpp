// RA: 2840482111016
// Pedro Luís Brilhadori

#include <iostream> 
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    int alta, baixa;
    float cot1, cot2, cot3, cot_a, cot_b; 
    string ativo, risco, top;

    baixa = alta =  cot_a = 0;
    cot_b = 100000000;

    cout << "Para sair digite 'exit' no nome do ativo" << endl;
    cout << "Pressione ENTER para continuar..." << endl;

    getchar();
    system("clear");

    for (int i = 0; ativo != "exit";){
        
        cout << "Insira o nome do ativo: " << endl;
        cin >> ativo;
        
        if(ativo != "exit"){
            cout << "Insira os preços dos ultimos 3 dias: " << endl;
            cin >> cot1 >> cot2 >> cot3;

            cot3 -= cot2;
            cot2 -= cot1;
            cot1 = cot3 + cot2;
            
            if (cot1 > 0){
                alta++;

                if(cot1 > cot_a){
                    cot_a = cot1;
                    top = ativo;
                }

            } else{
                baixa++;

                if(cot1 < cot_b)
                    cot_b = cot1;
                    risco = ativo;        
            }
        }
    }
    
    cout << "----------------------------------------" << endl;
    cout << "Ativos em alta: " << alta << endl;
    cout << "Ativos em baixa: " << baixa << endl;
    cout << "Ativo mais lucrativo: " << top << endl;
    cout << "Ativo mais prejudicial: " << risco << endl;
    cout << "----------------------------------------" << endl;
 
    return 0;
}