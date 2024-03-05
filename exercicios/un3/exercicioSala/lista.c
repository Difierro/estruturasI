#include "lista.h"


struct lista{
    int info;
    Lista * proxElemento;
};

Lista * criarLista(void){
    return NULL;
}

Lista * insereElemento(Lista * lista, int novoElemento){
    Lista * novoNo = (Lista*) malloc(sizeof(Lista)); 
    if (novoNo == NULL){
        exit(1);
    }

    novoNo->info = novoElemento;
    novoNo->proxElemento = lista;
    return novoNo;
}

void * imprimeElementos(Lista * listaEncadeada){
    Lista* contador;
    for ( contador = listaEncadeada; contador != NULL; contador = contador->proxElemento){
        printf("%d\n", contador->info);
    }
    
}

void verificaVazia(Lista * listaEncadeada){
    if(listaEncadeada == NULL){
        printf("Esta vazia");
    }
}

Lista * procuraElemento(Lista * listaEncadeada, int valor){
    Lista* contador;
    for ( contador = listaEncadeada; contador != NULL; contador = contador->proxElemento){
        if(contador->info == valor){
            printf("encontrado\n");
            return contador;
        }  
    }
        printf("nao encontrado!\n");
        return NULL;
}


Lista *  removeElemento(Lista * listaEncadeada, int valor){
    Lista * ant = NULL;
    Lista * contador = listaEncadeada;
    
    while (contador != NULL && contador->info != valor){
        ant = contador;
        contador = contador->proxElemento;
    }
    if(contador == NULL){
        return listaEncadeada; 
    }

    if(ant == NULL){
        listaEncadeada = contador->proxElemento;
    }else{
        ant->proxElemento = contador->proxElemento;
    }

    free(contador);
    return listaEncadeada;
}

void liberaLista(Lista * listaEncadeada){
    Lista * aux = listaEncadeada;
    while (aux != NULL){
        Lista * refAux = aux->proxElemento; 
        free(aux);
        aux = refAux;
    }
}