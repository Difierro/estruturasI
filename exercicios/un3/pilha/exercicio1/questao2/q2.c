#include "../questao1/b/pilha.h"

typedef struct no{
    float info;
    No * prox;
};

struct pilha{
    No * topo;
};

float topo(Pilha * p){
    float valor = pilha_pop(p);
    pilha_push(p, valor);
    return valor;
}

void concatena_pilhas(Pilha* p1, Pilha* p2){
    Pilha * aux = pilha_cria();
    while (!pilha_vazia){
        pilha_push(aux, pilha_pop(p2));
    }

    while (!pilha_vazia(aux)){
        pilha_push(p1, pilha_pop(aux));
    }
    pilha_libera(aux);
}