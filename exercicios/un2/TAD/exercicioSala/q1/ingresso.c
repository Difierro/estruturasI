#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"

struct ingresso{
    float preco;
    char local[30];
    char atracao[40];
};

void preencherDados(Ingresso * ingresso, int qtdIngressos){
    int i;
    for (i = 0; i < qtdIngressos; i++){
        printf("digite a atracao: ");
        scanf(" %[^\n]", ingresso[i].atracao);
        printf("digite o local: ");
        scanf(" %[^\n]", ingresso[i].local);
        printf("digite o valor do ingresso: ");
        scanf(" %f", &ingresso[i].preco);
    }   
}


void imprimirDados(Ingresso * ingresso, int qtdIngressos){
    int i;
    for (i = 0; i < qtdIngressos; i++){
        printf("Atracao: %s\n", ingresso[i].atracao);
        printf("Local: %s\n", ingresso[i].local);
        printf("Valor do ingresso: R$%.2f\n", ingresso[i].preco);
        printf("------------------------------------------------------\n");
    }   
}

void alterarPreco(Ingresso * ingresso, int qtdIngressos){
    float novoPreco = 0;
    int i;
    for( i = 0; i < qtdIngressos; i++){
        printf("digite o novo valor do ingresso para %s: ", ingresso[i].atracao);
        scanf(" %f", &novoPreco);
        ingresso[i].preco = novoPreco;
    }
}

void imprimeMaiorMenorPreco(Ingresso * ingresso, int qtdIngressos){
    int i, maior = 0, menor = 0;
    for(i = 1; i < qtdIngressos; i++){
        if(ingresso[i].preco < ingresso[menor].preco){
            menor = i;
        }else if(ingresso[i].preco > ingresso[maior].preco){
            maior = i;
        }
    }
    printf("maior = %s \t valor: %f \n menor = %s \t valor: %f", ingresso[maior].atracao,ingresso[maior].preco, ingresso[menor].atracao, ingresso[menor].preco);
}