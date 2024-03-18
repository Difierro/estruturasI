#include "pilha.h"

struct no{
    float info;
    No * prox;
};

struct pilha{
    No * topo;
};

Pilha* pilha_cria(void){
    Pilha * novaPilha = malloc(sizeof(Pilha));
    novaPilha->topo = NULL;
    return novaPilha;
}

void pilha_push(Pilha* p, float v){
    No * novoNo = malloc(sizeof(No));
    novoNo->info = v;
    novoNo->prox = p->topo;
    p->topo = novoNo;
}

float pilha_pop(Pilha* p){
    if(pilha_vazia(p)){
        printf("Pilha vazia \n");
        exit(1);
    }
    No * temp = malloc(sizeof(No));
    float valor;
    temp = p->topo;
    valor = temp->info;
    p->topo = temp->prox;
    free(temp);
    return valor;
}

int pilha_vazia(Pilha* p){
    return(p->topo == NULL);  
}

void pilha_libera(Pilha* p){
    if(!pilha_vazia(p)){
        do{
            No * temp = malloc(sizeof(No));
            temp = p->topo;
            p->topo = temp->prox;
            free(temp);
            
        }while(p->topo != NULL);
    }
    free(p);
}