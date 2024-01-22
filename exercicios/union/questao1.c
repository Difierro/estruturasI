#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef union genero{
    char masculino[10];
    char feminino[10];
}Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero;
}Pessoa;

void preencherDados(Pessoa * pessoa){
    int opcao;

    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", pessoa->nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa->idade);
    printf("Selecione o sexo da pessoa: 0.Masculino 1.Feminino");
    scanf("%d", &opcao);
    if(opcao){
        strcpy(pessoa->genero.masculino, "FEMININO");
    }else{
        strcpy(pessoa->genero.feminino, "MASCULINO");
    }
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    preencherDados(pessoa);
    printf("Nome da pessoa: %s\n", pessoa->nome);
    printf("idade: %d\n", pessoa->idade);
    printf("genero: %s\n", pessoa->genero.feminino);
    free(pessoa);
    return 0;
}