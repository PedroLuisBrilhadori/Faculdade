#include <iostream>

using namespace std;

int main(){

    int i, sim, nao;
    float mulher, homem;
    char sexo, simnao;

    sim = nao = mulher = homem = 0;

    for (i = 1; i <=5; i++){
        
        cout << "Sexo do entrevistado " << i << " [F]FEMININO,[M]ASCULINO" << endl;
        cin >> sexo; 
        cout << "Decisão do entrevistado " << i << " [S]SIM, [N]NÃO" << endl;
        cin >> simnao;
            
        if(simnao == 'S' || simnao == 's'){
            sim++;
            if(sexo == 'F' || sexo == 'f')
                mulher++;
        }else
            if(simnao == 'N' || simnao == 'n'){
                nao++;
                if(sexo == 'M' || sexo == 'm')
                    homem++;
            }
    }


    mulher = mulher / sim;
    homem = homem / nao;

    cout << "----------------------------------------" << endl;
    cout << "Quantidade de pessoas que gostaram: " << sim << endl;
    cout << "Quantidade de pessoas que não gostaram: " << nao << endl;
    cout << "Porcentagem de mulheres que gostaram: " << mulher * 100 << "%" << endl;
    cout << "Porcentagem de homens que não gostaram: " << homem * 100 << "%" << endl;
    cout << "----------------------------------------" << endl;
}