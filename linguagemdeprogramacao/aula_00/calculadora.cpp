#include <iostream> 

using namespace std;



int menu() {
    int i = 0;
    while(i == 0) {
        cout << "-----------------------" << endl;
        cout << "\t menu" << endl;
        cout << "1 - soma" << endl;
        cout << "2 - subtração" << endl;
        cout << "3 - multiplicação" << endl;   
        cout << "4 - divisão" << endl;   
        cout << "5 - sair" << endl;   
        cout << "-----------------------" << endl;
        cin >> i; 
    }
    return i;
}


int main() {

    system("chcp 65001");

    int operacao;
    float n1, n2; 


    do{
        operacao = menu();

        switch (operacao)
        {
        case 1:
            cout << "Insira os números para somar: " << endl;
            cin >> n1 >> n2;
            cout << "-----------------------" << endl;
            cout << "resultado: " << n1 + n2 << endl;
            break;
        case 2: 
            cout << "Insira os números para subtrair: " << endl;
            cin >> n1 >> n2;
            cout << "-----------------------" << endl;
            cout << "resultado: " << n1 - n2 << endl;
            break;
        case 3: 
            cout << "Insira os números para multiplicação: " << endl;
            cin >> n1 >> n2;
            cout << "-----------------------" << endl;
            cout << "resultado: " << n1 * n2 << endl;
            break;
        case 4: 
            cout << "Insira os números para divisão: " << endl;
            cin >> n1 >> n2;
            if (n2 != 0){
                cout << "-----------------------" << endl;
                cout << "resultado: " << n1 / n2 << endl;
            }
            else
                cout << "impossivel divisão por 0" << endl;
            break;
        default:
            system("chcp 850");
            return 0;
            break;
        }
    }while(operacao != 0);
        

    return 0;
}