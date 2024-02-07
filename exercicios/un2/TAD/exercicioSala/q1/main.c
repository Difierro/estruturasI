#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"

int main(void){
    int qtdIngressos = 3;
    Ingresso * ingresso = malloc(qtdIngressos * sizeof(Ingresso *));

    preencherDados(ingresso, qtdIngressos);
    imprimirDados(ingresso, qtdIngressos);
    alterarPreco(ingresso, qtdIngressos);
    imprimeMaiorMenorPreco(ingresso, qtdIngressos);
    
    free(ingresso);

    return 0;
}