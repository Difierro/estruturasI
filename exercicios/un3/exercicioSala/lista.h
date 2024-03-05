#include <stdlib.h>
#include <stdio.h>

/*Novo tipo estruturado Lista*/
typedef struct lista Lista;

/*função de criação: retorna uma lista vazia com NULL*/
Lista * criarLista(void);

/*função que insere novo nó na lista encadeada*/
Lista * insereElemento(Lista * lista, int novoElemento);

/*função que imprime os valores da lista encadeada*/
void * imprimeElementos(Lista * listaEncadeada);

/*função que verifica se a lista está vazia*/
void verificaVazia(Lista * listaEncadeada);

/*função que procura um elemento na lista*/
Lista * procuraElemento(Lista * listaEncadeada, int valor);

/*função que remove um elemento da lista*/
Lista * removeElemento(Lista * listaEncadeada, int valor);

/*função que libera a lista*/
void liberaLista(Lista * listaEncadeada);