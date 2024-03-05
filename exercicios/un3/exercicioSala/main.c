#include "lista.h"

int main (void){
    Lista * listaEncadeada = criarLista();
    int ElementoRemover = 0;
    listaEncadeada = insereElemento(listaEncadeada, 3);
    listaEncadeada = insereElemento(listaEncadeada, 2);
    listaEncadeada = insereElemento(listaEncadeada, 5);
    listaEncadeada = insereElemento(listaEncadeada, 4);
    listaEncadeada = insereElemento(listaEncadeada, 7);

    verificaVazia(listaEncadeada);

    imprimeElementos(listaEncadeada);

    procuraElemento(listaEncadeada, 4);
    
    printf("Digite o elemento que deseja remover: ");
    scanf("%d", &ElementoRemover);
    listaEncadeada = removeElemento(listaEncadeada, ElementoRemover);

    imprimeElementos(listaEncadeada);

    liberaLista(listaEncadeada);


    return 0;
}

