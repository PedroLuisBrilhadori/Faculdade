    /* 
    Supondo que a população de um país A seja da ordem de 9.000.000 de habitantes com uma 
    taxa anual de crescimento de 3% e que a população de um país B seja, aproximadamente, 
    de 20.000.000 de habitantes com uma taxa anual de crescimento de 1,5%, 

    fazer um algoritmo que calcule e escreva o número de anos necessários 
    para que a população do país A ultrapasse ou iguale a população do país B, 
    mantidas essas taxas de crescimento
    */

   #include <iostream>

   using namespace std;

   int main(){

       int i, populacaoA = 9000000, populacaoB = 20000000;

        for (i = 0; populacaoA <= populacaoB; i++){
            populacaoA += populacaoA * 0.03;
            populacaoB += populacaoB * 0.015;
        }

        cout << "Foram necessários: " << i << endl;

        return 0;
   }