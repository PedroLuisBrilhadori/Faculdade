#include <iostream>

using namespace std;

int main(){

    int i, canal, flag, audiencia, total;
    float aporcent, bporcent, cporcent, dporcent;

    aporcent = bporcent = cporcent = dporcent = canal = audiencia = 0;
    flag = 1;
    
    for (i = 0; flag != 0;){
        cout << "Insira o canal: ";
        cin >> canal;
        
        if (canal == 4 || canal == 5 || canal == 7 || canal == 12){
            cout << "Insira a quantidade de pessoas assistindo: " << endl;
            cin >> audiencia;
            total += audiencia;
        }
        
        switch (canal) {
        case 4:
            aporcent += audiencia;
            break;
        case 5:
            bporcent += audiencia;
            break;
        case 7:
            cporcent += audiencia;
            break;
        case 12:
            dporcent += audiencia;
            break;
        default:
            flag = 0;
            break;
        }
    }

    aporcent /= total;
    bporcent /= total;
    cporcent /= total;
    dporcent /= total;

    cout << "--------------------------------------------" << endl;
    cout << "Porcentagem do canal 4: " << aporcent * 100 << "%" << endl;
    cout << "Porcentagem do canal 5: " << bporcent * 100 << "%" << endl;
    cout << "Porcentagem do canal 7: " << cporcent * 100 << "%" << endl;
    cout << "Porcentagem do canal 12: " << dporcent * 100 << "%" << endl;
    cout << "--------------------------------------------" << endl;


    return 0;
}