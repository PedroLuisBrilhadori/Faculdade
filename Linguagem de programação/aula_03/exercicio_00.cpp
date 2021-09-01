#include <iostream> 

using namespace std;

int main() {
    int i = 0;
    float imc, peso, altura, maiorPeso, menorPeso, maiorImc, menorImc, maiorAltura, menorAltura;
    double  mediaAltura,  mediaImc,  mediaPeso;
    char flag;

    mediaPeso = mediaAltura = mediaImc = 0;

    do{

        cout << "Insira um peso e uma alura \n";
        cin >> peso >> altura; 
        imc = peso / (altura * altura);


        if(i == 0){
            menorPeso = maiorPeso = peso;
            menorAltura = maiorAltura = altura;
            menorImc = maiorImc = imc; 
        }

        if(menorAltura > altura)
            menorAltura = altura;
        
        if(maiorAltura < altura)
            maiorAltura = altura;
                
        if(menorPeso > peso)
            menorPeso = peso;
        
        if(maiorPeso < peso)
            maiorPeso = peso;
        
        if(menorImc > imc)
            menorImc = imc;
        
         if(maiorImc < imc)
            maiorImc = imc;

        mediaAltura += altura;
        mediaPeso += peso;
        mediaImc += imc;
        
        i++;
        
        cout << "Deseja continuar? [S,N] ";
        cin >> flag; 
        
    }while(toupper(flag) == 'S');  


    mediaAltura /= i;
    mediaPeso /= i;
    mediaImc /= i;

    cout << "-------------------------------------------" << endl;
    cout << "A maior altura é: " << maiorAltura << endl;
    cout << "A menor altura é: " << menorAltura << endl;
    cout << "A media das alturas é: " << mediaAltura << endl;
    cout << "--------------------------------" << endl;
    cout << "O maior peso é: " << maiorPeso << endl;
    cout << "O menor peso é: " << menorPeso << endl;
    cout << "A media dos pesos é: " << mediaPeso << endl;
    cout << "--------------------------------" << endl;
    cout << "O maior IMC é: " << maiorImc << endl;
    cout << "O menor IMC é: " << menorImc << endl;
    cout << "A media de IMCs é: " << mediaImc << endl;
    cout << "-------------------------------------------" << endl;

    return 0;
}