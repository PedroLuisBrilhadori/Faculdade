class PilhaChar {
    private:
        int contador;
        int capacidade;
        char conteudo[MAX];
    public:
        PilhaChar();
        bool vazia();
        bool cheia();
        bool empilhar(char valor);
        bool desempilhar(char &valor);
        bool retornaTopo(char &valor);
        bool invertePilha();
        bool palindromo(char palavra[MAX], int &tamanho);
        void exibePilha();
};