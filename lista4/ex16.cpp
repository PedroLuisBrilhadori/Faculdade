#include <iostream> 

using namespace std;

int main() {

    int i, mulheres35, menor, nmr_cand, idade, feminino, masculino;
    float media_homens; 
    char sexo, xp;

    menor = 9000000;
    feminino = masculino = mulheres35 = media_homens = 0;

    for (i =0; nmr_cand != 0;){

        cout << "Insira o número do candidato: ";
        cin >> nmr_cand;

        if (nmr_cand != 0){
            cout << "Insira a idade do candidato: ";
            cin >> idade;
            cout << "Insira o sexo do candidato, [F]eminino, [M]asculino: ";
            cin >> sexo;
            cout << "Candidato tem experiência, [S]im, [N]ão: ";
            cin >> xp;

            if (sexo == 'F' || sexo == 'f'){
                feminino++;

                if (xp == 'S' || xp == 's'){
                    
                    if (idade < menor)
                        menor = idade;
                    
                    if(idade < 35)
                        mulheres35++;
                }
            } else  
                if (sexo == 'M' || sexo == 'm'){
                    masculino++;
                    
                    if(idade > 45){
                        i++;
                        media_homens += idade;
                    }
                }    
            cout << "--------------------------------------------" << endl;       
        } 
    }
    
    cout << "------------------------------------------" << endl;
    cout << "Número de candidatos do sexo feminino: " << feminino << endl;
    cout << "Número de candidatos do sexo masculino: " << masculino << endl;
    cout << "Média dos homens com mais de 45 anos: " << media_homens << endl;
    cout << "Número de mulheres com menos de 35 e experiência: " << mulheres35 << endl;
    cout << "Menor idade entre mulheres: " << menor << endl;
    cout << "------------------------------------------" << endl;


    return 0;
}