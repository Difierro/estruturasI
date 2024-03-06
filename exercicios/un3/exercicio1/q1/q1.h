#include <stdio.h>
#include <stdlib.h>


typedef struct lista{
   int info;
   struct lista * proxNo;
} Lista;

typedef struct listaReais{
    float info;
    struct listaReais * proxNo;
} ListaReais;

ListaReais * criaListaReal(void);

Lista * criaLista(void);

ListaReais * insereElementoReal(ListaReais * lista, float novoElemento);

Lista * insereElemento(Lista * lista, int novoElemento);
void imprimeElementos(Lista * lista);

void imprimeElementosConcat(ListaReais * lista);

int maiores(Lista * lista, int valor);

Lista * ultimo(Lista * lista);

ListaReais * concatena(ListaReais* lista1, ListaReais * lista2);

Lista * retiraNum(Lista * lista, int num);
