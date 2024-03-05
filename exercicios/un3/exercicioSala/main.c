#include "lista.h"

int main (void){
    Lista * listaEncadeada = criarLista();

    listaEncadeada = insereElemento(listaEncadeada, 3);
    listaEncadeada = insereElemento(listaEncadeada, 2);
    listaEncadeada = insereElemento(listaEncadeada, 5);
    listaEncadeada = insereElemento(listaEncadeada, 4);
    listaEncadeada = insereElemento(listaEncadeada, 7);

    verificaVazia(listaEncadeada);

    imprimeElementos(listaEncadeada);

    procuraElemento(listaEncadeada, 4);
    
    removeElemento(listaEncadeada, 5);

    imprimeElementos(listaEncadeada);

    liberaLista(listaEncadeada);


    return 0;
}

