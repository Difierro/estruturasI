#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
}Aluno;

void preencherDados(Aluno * aluno, int qtdAlunos);


int main(void){
    int qtdAlunos = 0;
    int i = 0;

    printf("digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    Aluno * aluno = malloc(qtdAlunos * sizeof(Aluno));

    preencherDados(aluno, qtdAlunos);

    FILE * saida = fopen("saida.txt", "wt");

    for (i = 0; i < qtdAlunos; i++){
        fprintf(saida, "%s\t%.2f\t%.2f\t%.2f\n", aluno[i].nome, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);
    }
    
    fclose(saida);
    free(aluno);

    return 0;
}

void preencherDados(Aluno * aluno, int qtdAlunos){
    int i;

    for (i= 0; i < qtdAlunos; i++){
        printf("digite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", aluno[i].nome);
        printf("digite a nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("digite a nota 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("digite a nota 3: ");
        scanf("%f", &aluno[i].nota3);
    }
}