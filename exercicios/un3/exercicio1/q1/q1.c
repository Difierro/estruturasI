#include "q1.h"

Lista * criaLista(void){
    return NULL;
}

ListaReais * criaListaReal(void){
    return NULL;
}

ListaReais * insereElementoReal(ListaReais * lista, float novoElemento){
    ListaReais * novoNo = (ListaReais *) malloc(sizeof(ListaReais));
    if (novoNo == NULL){
        exit(1);
    }

    novoNo->info = novoElemento;
    novoNo->proxNo = lista;
    return novoNo;
}

Lista * insereElemento(Lista * lista, int novoElemento){
    Lista * novoNo = (Lista *) malloc(sizeof(Lista));
    if (novoNo == NULL){
        exit(1);
    }

    novoNo->info = novoElemento;
    novoNo->proxNo = lista;
    return novoNo;
}

void imprimeElementos(Lista * lista){
    Lista * contador;
    for ( contador = lista; contador != NULL; contador = contador->proxNo){
        printf("%d\n", contador->info);
    }
}

int maiores(Lista * lista, int valor){
    int count = 0;
    Lista * countLista = lista;
    while (countLista != NULL){
        if (countLista->info > valor){
            count++;
        }
        countLista = countLista->proxNo;
    }
    return count;
}

Lista * ultimo(Lista * lista){
    Lista * contador = NULL;
    for(contador = lista; contador != NULL; contador = contador->proxNo){
        if(contador->proxNo == NULL){
            return contador;
        }
    }
    return lista;
}

ListaReais * concatena(ListaReais * lista1, ListaReais * lista2){
    if (lista1 == NULL) {
        return lista2;
    }

    ListaReais * contador = lista1;
    while(contador->proxNo != NULL){
        contador = contador->proxNo;
    }

    contador->proxNo = lista2;
    return lista1;
}

void imprimeElementosConcat(ListaReais * lista){
    ListaReais * contador;
    printf("Elementos concatenados: \n");
    for ( contador = lista; contador != NULL; contador = contador->proxNo){
        printf("%f\n", contador->info);
    }
}

Lista * retiraNum(Lista * lista, int num){
    Lista * anterior = NULL;
    Lista * contador = lista;

    while(contador != NULL){
        if(contador->info == num){
            if(anterior == NULL){
                lista = contador->proxNo;
            } else {
                anterior->proxNo = contador->proxNo;
            }
            Lista * temp = contador;
            contador = contador->proxNo;
            free(temp);
        } else {
            anterior = contador;
            contador = contador->proxNo;
        }
    }
    return lista;
}