#include <iostream>

using namespace std;

int main(){

    int i, cod_curso, vagas, masculino, feminino, total_cand, cand;
    float homens, mulheres;

    homens = mulheres = cand = total_cand = 0;

    for (cod_curso = 1; cod_curso != 0;){
        i = 0;
        cout << "Insira o codigo do curso: ";
        cin >> cod_curso;

        if (cod_curso != 0){
            cout << "Insira a quantidade de vagas: ";
            cin >> vagas;

            cout << "Candidatos com o sexo masculino: ";
            cin >> masculino;
            cout << "Candidatas com o sexo feminino: ";
            cin >> feminino;

            cand = masculino + feminino;

            mulheres = (float)feminino/ (float)cand;

            total_cand += masculino + feminino;
            
            cout << "Curso: " << cod_curso << endl;
            cout << "Quantidade de candidatos: " << cand << endl;
            cout << "Porcentagem de Mulheres: " << mulheres * 100 << "%" << endl;
        }
    }


    return 0;
}