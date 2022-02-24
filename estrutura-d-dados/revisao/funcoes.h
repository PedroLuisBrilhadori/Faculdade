
// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a 
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado 

struct calculo {
    int a;
    int b;
    char operacao;
    int resultado;
};

// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico

calculo historico[5]; 


// Implemente a função soma:
int soma(int a, int b) {
    // Seu código aqui:
    return a + b;
}

// Implemente a função subtracao:
int subtracao(int a, int b) {
    // Seu código aqui:
    return a - b;
}

// Implemente a função multiplicacao:
int multiplicacao(int a, int b) {
    // Seu código aqui:
    return a * b;
}

// Implemente a função divisao:
int divisao(int a, int b) {
    // Seu código aqui:
    if(!(b == 0)){
        return a / b;
    }

    cout << "Erro, divisão por 0 \n";
    return 0;
}

// funçao para adicionar caulculos ao historico
void adicionaCalculo(int a, int b, char op, int result) {
    calculo calculo; 

    calculo.a = a;
    calculo.b = b; 
    calculo.operacao = op;
    calculo.resultado = result;

    for(int i = 4; i > 0; i--){
        historico[i] = historico[i - 1];
    }  

    historico[0] = calculo;
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao) {
    // Seu código aqui:
    switch (operacao) {
        case '+':             
            adicionaCalculo(a, b, operacao, soma(a, b));
            return soma(a, b);
            break;
        case '-': 
            adicionaCalculo(a, b, operacao, subtracao(a, b));
            return subtracao(a, b);
            break;
        case '*': 
            adicionaCalculo(a, b, operacao, multiplicacao(a, b));
            return multiplicacao(a, b);
            break;
        case '/': 
            adicionaCalculo(a, b, operacao, divisao(a, b));
            return(divisao(a, b));
            break;    
        default:
            return 0;
            break;
    }

}

// Implemente a função limpaHistorico:
int limpaHistorico() {
    // Seu código aqui:
    for(auto h: historico){
        h.a = 0;
        h.b = 0;
        h.operacao = 0; 
        h.resultado = 0;
    }

    return 1;
}

// Implemente a função listaHistorico:
string listaHistorico() {
    // Seu código aqui:
    string resultados = "Histórico: \n";

    for(int i = 0; i < 5; i++){
        resultados += "\t";

        resultados += to_string(historico[i].a);
        resultados += " ";

        resultados += historico[i].operacao;

        resultados += " "; 
        resultados += to_string(historico[i].b);
        
        resultados += " = ";
        resultados += to_string(historico[i].resultado);
        
        resultados += "\n" ;
    }

    cout << resultados << endl;
    return ""; 
}
