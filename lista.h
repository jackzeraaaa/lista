#define TAMANHO 100

struct ListaVetorInteiros {
    // Dados
    int *_elementos;
    int _num_elementos_inseridos;
    int _capacidade = TAMANHO;
    // Construtor
    ListaVetorInteiros();
    // Destrutor
    ~ListaVetorInteiros();
    // Insere um inteiro na lista
    void inserir_elemento(int elemento);
    // Imprime a lista
    void imprimir();
    // Remove primeiro elemento
    void remover_primeiro();
    // Remove ultimo elemento
    void remover_ultimo();
    // Inverte lista
    void inverte();
};