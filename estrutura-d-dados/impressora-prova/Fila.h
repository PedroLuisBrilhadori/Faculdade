class Fila {
    private:
        struct elemento {
            int id;
            string nome;
            int qntFolhas;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;

        int folhas; 
        int contador;
        int arquivos;
    public:
        Fila();
        bool vazia();
        bool cheia();
        // alterar
        bool inserir(string nomeArquivo, int qntFolhas);
        bool remover(int &id, string &nome, int &qntFolhas);
        // implementar
        string listar();
        bool imprimir();

        bool inserirFolhas(int auxFolhas);
        int listarFolhas();
        bool verificaFolhas();

        int qntDeArquivos();
};