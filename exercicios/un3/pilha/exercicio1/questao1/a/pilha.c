#include "pilha.h"

#define MAX_SIZE 10

struct pilha{
    int topo;
    float * vetor;
};

Pilha * pilha_cria(void){
    Pilha* vetorDinamico = malloc(sizeof(Pilha));
    if(vetorDinamico == NULL) exit(1);
    
    vetorDinamico->vetor = (float *) malloc(MAX_SIZE * sizeof(float));
    vetorDinamico->topo = 0;
    return vetorDinamico;
}

void pilha_push(Pilha* p, float v){
    if (p->topo == MAX_SIZE){
        p->vetor = realloc(p->vetor, (2 * p->topo) * sizeof(float));
    }   
    p->vetor[p->topo] = v;
    p->topo++;
}

int pilha_vazia(Pilha* p){
        return (p->topo == 0);
}

float pilha_pop(Pilha* p){
    if(pilha_vazia(p)){
        printf("pilha vazia \n");
        exit(1);
    }

    float valor = p->vetor[p->topo - 1];
    p->topo--;
    return valor; 
}

void pilha_libera(Pilha* p){
    free(p->vetor);
    free(p);
}