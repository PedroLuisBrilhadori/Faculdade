#include <iostream> 

using namespace std;

int main() {

    int i, b, dia1, mes1, ano1, dia2, mes2, ano2, mes , dias, diferenca, menor, bisexto, limite;

    diferenca = bisexto = 0;

    cout << "Insira uma data(dia/mes/ano) para prosseguir: " << endl;
    cin >> dia1 >> mes1 >> ano1;
    cout << "Insira a segunda data(dia/mes/ano) para prosseguir: " << endl;
    cin >> dia2 >> mes2 >> ano2;

    for (dias = 0; dia1 > 0;){
        i = 0; // verifica se é o primeiro mes
        dias = 0;

        if(dia1 > 0 || dia2 > 0){

            // pega a diferença dos anos;
            if(ano1 > ano2){
                diferenca = ano1 - ano2;  
                menor = ano2 + 1;
            } else
                if(ano2 > ano1){
                    diferenca = ano2 - ano1;
                    menor = ano1 + 1;
                }
            
            if (diferenca == 0){
                limite = mes2 - mes1;
                limite += mes1;
                    
            } else
                limite = 13;

            
            for (mes = mes1; mes < limite; mes++){
                if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    
                    if(i == 0){
                        dias += 31 - dia1;
                        i++;
                    }else
                        dias += 31;

                } else
                    if(mes == 4 || mes == 9 || mes == 11){

                        if (i == 0){
                            dias += 30 - dia1;
                            i++;
                        }else
                            dias += 30;
                        
                    } else 
                        if(mes == 2){

                            if(ano1 % 4 == 0 || ano1 % 400 == 0){
                                
                                if (i == 0){
                                    dias += 29 - dia1;
                                    i++;
                                } else
                                    dias += 29;
                                                                   
                            } else
                                if(i == 0){
                                    dias += 28 - dia1;
                                    i++;
                                } else
                                    dias += 28;
                        }
            }
            
            if(diferenca > 1){    

                for (i = 1; i <= diferenca; i++){
                    if (menor % 4 == 0 || menor % 400 == 0){
                        bisexto = 1;
                    } else {
                        bisexto = 0;
                    }
                    if(bisexto == 1){
                        dias += 366;
                    } else
                        if(bisexto == 0){
                            dias += 365;
                        }
                    menor++;
                }
            }

            cout << "-------------------------------------" << endl;
            cout << "A diferença entre as datas são de: " << dias << " dias" << endl;
            cout << "-------------------------------------"  << endl;

            cout << "Insira uma data(dia/mes/ano) para prosseguir: " << endl;
            cin >> dia1 >> mes1 >> ano1;
            cout << "Insira a segunda data(dia/mes/ano) para prosseguir: " << endl;
            cin >> dia2 >> mes2 >> ano2;

        }
    }


    return 0;
}