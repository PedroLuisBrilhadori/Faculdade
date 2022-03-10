class Pilha {
    private:
        int contador;
        int capacidade;
        int conteudo[MAX];
    public:
        Pilha();
        bool vazia();
        bool cheia();
        bool empilhar(int valor);
        bool desempilhar(int &valor);
        bool retornaTopo(int &valor);
};