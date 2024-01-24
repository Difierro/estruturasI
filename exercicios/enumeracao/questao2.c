#include <stdio.h>
#include <stdlib.h>

typedef enum tipoProduto{
     eletronico,
     alimento,
     bebida
}Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipo;
}Produto;

void preencherDados(Produto * produto){
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", produto->nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto->preco);
    printf("selecione o tipo do produto: 0.Eletronico 1.Alimento 2.Bebida ");
    scanf("%d", &produto->tipo);
}

void lerDados(Produto * produto){
    printf("Nome do produto: %s\n", produto->nome);
    printf("preco do produto: %f\n", produto->preco);
    if (produto->tipo == eletronico){
        printf("Tipo do produto: Eletronico");
    }else if (produto->tipo == alimento){
        printf("Tipo do produto: Alimento");
    }else if (produto->tipo == bebida){
        printf("Tipo do produto: Bebida");
    }
}

int main(void){
    Produto * produto = malloc(sizeof(Produto));
    preencherDados(produto);
    lerDados(produto);
    free(produto);
    return 0;
}