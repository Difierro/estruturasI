#include <stdio.h>
#include <stdlib.h>

typedef enum genero{
    masculino,
    feminino
}Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero generoPessoa;
}Pessoa;

void preencherDados(Pessoa * pessoa){
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", pessoa->nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa->idade);
    printf("Selecione o sexo da pessoa: \n0.Masculino \n1.Feminino");
    scanf(" %d", &pessoa->generoPessoa);
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    preencherDados(pessoa);
    printf("Nome da pessoa: %s\n", pessoa->nome);
    printf("idade: %d\n", pessoa->idade);
    printf("genero: %s\n", pessoa->generoPessoa == feminino  ? "feminino" : "masculino");
    free(pessoa); 
    return 0;
}