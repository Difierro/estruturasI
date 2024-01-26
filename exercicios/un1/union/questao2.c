#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef union tipoProduto{
    char eletronico[12]; 
    char alimento[12];
    char bebida[12];
}Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipo;
}Produto;

void preencherDados(Produto * produto){
    int opcao = 0;
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", produto->nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto->preco);
    printf("selecione o tipo do produto: 1.Eletronico 2.Alimento 3.Bebida");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        strcpy(produto->tipo.eletronico, "ELETRONICO");// como nao da para atribuir com produto->tipo.eletronico = "ELETRONICO", usa-se a função para copiar
        break;
    case 2:
        strcpy(produto->tipo.alimento, "ALIMENTO");
        break;
    case 3:
        strcpy(produto->tipo.bebida, "BEBIDA");
        break;
    };
}

int main(void){
    Produto * produto = malloc(sizeof(Produto));
    preencherDados(produto);
    printf("Nome do produto: %s\n", produto->nome);
    printf("preco do produto: %f\n", produto->preco);
    printf("tipo do produto: %s\n", produto->tipo.alimento);
    free(produto);
    return 0;
}