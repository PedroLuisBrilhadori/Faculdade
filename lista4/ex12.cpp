#include <iostream>

using namespace std;

int main () {

    int b, i, frequencia, matricula, reprovado, reprovado_freq;
    float nota, media, turma, maior, menor;

    menor = 100000;
    maior = turma = reprovado = reprovado_freq =0;

    for (b = 0; b < 100; b++){
        
        media = 0;

        cout << "Informe o número da matrícula: ";  
        cin >> matricula;
        cout << "Informe a frequência: ";
        cin >> frequencia;


        for (i = 0 ; i < 3; i++){
            cout << "Insira a " << i + 1 << "° nota: " << endl;
            cin >> nota;
            media += nota;
        }  
        
        media /= 3;
        turma += media;
        if (frequencia < 40){
            reprovado_freq++;
            if(media >= 60){
               reprovado++;
            }
        }

        if (media > maior){
            maior = media;
        }else    
            if (media < menor){
                menor = media;
            }
        if (media < 60){
            reprovado++;
        } 

        cout << "Número de matrícula: " << matricula << endl;
        cout << "Frequência: " << frequencia << endl;
        cout << "Nota final: " << media;
        if (media >= 60 && frequencia >= 40)
            cout << " Aprovado!" << endl;
        else
            cout << " Reprovado!" << endl; 
        cout << "-------------------------------------" << endl;
    }
    turma /= 100;

    
    reprovado_freq /= reprovado;



    cout << "----------------------------------------" << endl;
    cout << "Maior nota da turma: " << maior << endl;
    cout << "Menor nota da turma: " << menor << endl;
    cout << "Nota média da turma: " << turma << endl;
    cout << "Total de alunos reprovados: " << reprovado << endl;
    cout << "Alunos que reprovaram por infrequência: " << reprovado_freq * 100 << "%" << endl;
    cout << "----------------------------------------" << endl;

    return 0; 
}