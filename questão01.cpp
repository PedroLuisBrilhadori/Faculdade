// RA: 2840482111016
// Pedro Luís Brilhadori

#include <iostream> 

using namespace std;

int main() {

    float peso, comprimento, largura, profundidade, volume;
    char material;

    cout << "insira o peso, comprimento, largura e profundidade: " << endl;
    cin >> peso >> comprimento >> largura >> profundidade;

    cout << "Insira o material do produto [P]lastico [V]idro [M]etal" << endl;
    cin >> material;


    volume = peso * comprimento * largura * profundidade;

    switch (material)
    {
    case 'P': 
        if(peso <= 30000 && volume < 50 && profundidade < 100)
            cout << "Peça de qualidade! " << endl;
        else   
            cout << "Peça Horrível! " << endl;
        break;
        
    case 'V':
        if(largura >= 25 && peso > 1000)
            cout << "Peça de qualidade! " << endl; 
        else
            if(volume > 35 && largura > 25 && profundidade < 10)
                cout << "Peça de qualidade! " << endl;
            else
                cout << "Peça horrível! " << endl;
        break;

    case 'M':
        if(volume < 80 && peso < 100000 && comprimento > 10)
            cout << "Peça de qualidade!" << endl;
        else
            cout << "Peça Horrível! " << endl;
        break;

    default:
        cout << "Dados Inválidos! " << endl;
        break;
    }

    return 0;
}