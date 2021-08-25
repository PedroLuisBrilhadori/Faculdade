// Escreva um programa que receba n notas e retorne a média das notas digitadas.

#include <iostream> 

using namespace std;

int main() {

    int i = 0;
    float media = 0, nota; 
    char flag;
    
    do{
        cout << "Insira uma nota: "; 
        fflush(stdin);
        cin >> nota;
        i++;

        media += nota;

        cout << "Deseja continuar? [S, N] \n ";
        fflush(stdin);
        cin >> flag;

 
    } while (toupper(flag) == 'S');

    cout << "a media de notas foi: " << media / i << endl;

    return 0;
}