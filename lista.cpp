#include <iostream>
#include "lista.h"

ListaVetorInteiros::ListaVetorInteiros() {
    if (_num_elementos_inseridos == TAMANHO) {
        std::cerr << "Erro, lista cheia" << std::endl;
        exit(1);
    }
    _elementos = new int[TAMANHO]();
    _num_elementos_inseridos = 0;
}

ListaVetorInteiros::~ListaVetorInteiros() {
    delete[] _elementos;
}

void ListaVetorInteiros::inserir_elemento(int elemento) {
    if (_num_elementos_inseridos == TAMANHO) {
        std::cerr << "Erro, lista cheia" << std::endl;
        exit(1);
    }
    _elementos[_num_elementos_inseridos] = elemento;
    _num_elementos_inseridos++;
}

void ListaVetorInteiros::remover_ultimo(){
    _num_elementos_inseridos--;
}
void ListaVetorInteiros::remover_primeiro(){
    for(int i=0;i<_num_elementos_inseridos-1;i++){
        _elementos[i] = _elementos[i+1];
    }
    _num_elementos_inseridos--;
}
void ListaVetorInteiros::imprimir(){
    for(int i=0;i<_num_elementos_inseridos;i++){
        std::cout << _elementos[i] << std::endl;
    }
}

void ListaVetorInteiros::inverte(){
    std::cout << "Invertendo...\n";
    int *invertido = new int[_num_elementos_inseridos];
    for(int i=0;i<_num_elementos_inseridos;i++){
        invertido[i] = _elementos[_num_elementos_inseridos-i-1];
    }
    for(int i=0;i<_num_elementos_inseridos;i++){
        _elementos[i] = invertido[i];
    }
    delete[] invertido;
}
