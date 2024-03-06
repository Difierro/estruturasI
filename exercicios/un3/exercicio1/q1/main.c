#include "q1.h"

int main(void){
    Lista * listaGeral = criaLista();

    listaGeral = insereElemento(listaGeral, 1);
    listaGeral = insereElemento(listaGeral, 2);
    listaGeral = insereElemento(listaGeral, 5);
    listaGeral = insereElemento(listaGeral, 2);
    listaGeral = insereElemento(listaGeral, 7);
    printf("elementos iniciais: \n");
    imprimeElementos(listaGeral);

    int qtdMaiores = maiores(listaGeral, 1);
    printf("a qtd de numeros maiores que 1 sao: %d\n", qtdMaiores);

    Lista * ultimoElemnto = NULL;
    ultimoElemnto = ultimo(listaGeral);
    printf("O ultimo elemento da lista e: %d\n", ultimoElemnto->info);

    ListaReais * lista1 = criaListaReal();
    lista1 = insereElementoReal(lista1, 2.4);
    lista1 = insereElementoReal(lista1, 3.6);
    lista1 = insereElementoReal(lista1, 7.2);
    lista1 = insereElementoReal(lista1, 8.5);
    ListaReais * lista2 = criaListaReal();
    lista2 = insereElementoReal(lista2, 1.2);
    lista2 = insereElementoReal(lista2, 3.4);
    lista2 = insereElementoReal(lista2, 5.6);
    lista2 = insereElementoReal(lista2, 7.8);
    ListaReais * listaConcatenada = concatena(lista1, lista2);
    imprimeElementosConcat(listaConcatenada);

    listaGeral = retiraNum(listaGeral, 2);

    printf("elementos apos a retirada do 5: \n");
    imprimeElementos(listaGeral);

    return 0;

    
}