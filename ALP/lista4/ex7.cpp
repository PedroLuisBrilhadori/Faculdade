

#include <iostream>

using namespace std;

int main(){

    char turma, presenca;
    int i, b, turma5, id_aluno;
    float ausente, alunos, por;

    turma5 = 0;

    for(i = 65; i < 79; i++){
        ausente = por = 0;
        turma = i;
        cout << "Digite a quantidade de alunos: ";
        cin >> alunos;

        for(b = 0; b < alunos; b++){
            cout << "Insira o id do aluno: ";
            cin >> id_aluno;
            cout << "Aluno " << b << " A/P? " << endl;
            cin >> presenca;

            if (presenca == 'A' || presenca == 'a')
                ausente++;
        }
        
        por = ausente / alunos;          

        if (por > 0.05)
            turma5++;

        cout << "A porcentagem de alunos ausentes da turma " << turma <<  alunos <<" é: " << por * 100 << "%" << endl;
    }

        cout << "A quantidade de turmas com ausência superior a 5 foi: " << turma5 << endl;

    return 0;
}