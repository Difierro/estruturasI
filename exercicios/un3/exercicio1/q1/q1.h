#include <stdio.h>
#include <stdlib.h>

/*definindo novo tipo estruturado Lista*/
typedef struct lista{
   int info;
   struct lista * proxNo;
} Lista;

/*definindo novo tipo estruturado Lista Reais*/
typedef struct listaReais{
    float info;
    struct listaReais * proxNo;
} ListaReais;

/*função que cria uma nova lista real*/
ListaReais * criaListaReal(void);

/*função que cria uma nova lista de inteiros*/
Lista * criaLista(void);

/*função que insere novos nós na lista encadeada de numeros reais*/
ListaReais * insereElementoReal(ListaReais * lista, float novoElemento);

/*função que insere novos nós na lista encadeada de numeros inteiros */
Lista * insereElemento(Lista * lista, int novoElemento);

/*função que imprime os elementos de listas encadeadas de inteiro*/
void imprimeElementos(Lista * lista);

/*função que verifica quantos elementos maiores que n existem na lista encadeada de inteiro*/
int maiores(Lista * lista, int valor);

/*função que verifica qual o ultimo elemento da lista encadeada de inteiros*/
Lista * ultimo(Lista * lista);

/*função que concatena duas listas encadeadas de reais distintas*/
ListaReais * concatena(ListaReais* lista1, ListaReais * lista2);

/*função que imprime elementos concatenados*/
void imprimeElementosConcat(ListaReais * lista);

/*função que remove todos os numeros iguais a n de uma lista encadeada de inteiros*/
Lista * retiraNum(Lista * lista, int num);
