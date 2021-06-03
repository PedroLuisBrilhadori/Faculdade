#include <iostream>

using namespace std;

int main() {

    int criancas, meses, i;
    float mortes, masc_mortes, mortes24; 
    char sexo, flag;

    mortes = mortes24 = masc_mortes = criancas = meses = 0; 

    cout << "Insira a quantidade de crianças nascidas nesse periodo: ";
    cin >> criancas;

    for (i = 0; sexo != 'V';){
        cout << "Insira o sexo da criança: ";
        cin >> sexo;
        if (sexo != 'V'){
            cout << "Insira a idade em meses: ";
            cin >> meses;

            mortes++;

            if (sexo == 'M')
                masc_mortes++;
            
            if (meses <= 24)
                mortes24++;
        }
    }

    mortes24 /= mortes;
    cout << mortes24 << endl;

    masc_mortes /= mortes;
    mortes /= (float)criancas;


    cout << "------------------------------------------------------" << endl;
    cout << "Porcentagem de mortes no período: " << mortes * 100 << "%" << endl;
    cout << "Porcentagem de meninos mortos: " << masc_mortes * 100 << "%" << endl;
    cout << "Porcentagem de crianças com menos de 25 meses: " << mortes24 * 100 << "%" << endl;
    cout << "-------------------------------------------------------" << endl;
    
    return 0;
}