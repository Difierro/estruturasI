#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[50];
    int numeroDocumento;
    int idade;
}Pessoa;


void preencherDados();
void imprimirDados();
void comparacaoIdade();
void atualizacaoIdade();

int main (void){
    int qtdPessoa = 3; //para exepmlo, coloquei qtdPessoa com valor 3
    Pessoa* pessoa = malloc(qtdPessoa *sizeof(Pessoa));

    preencherDados(pessoa, qtdPessoa);
    imprimirDados(pessoa, qtdPessoa);
    atualizacaoIdade(pessoa, qtdPessoa);
    comparacaoIdade(pessoa, qtdPessoa);
    free(pessoa);
    return 0;
}


void preencherDados(Pessoa * pessoa, int qtdPessoa){
    int i;
    for(i=0; i < qtdPessoa; i++){
        printf("Digite o nome da %d pessoa: \n", i+1);
        scanf(" %[^\n]", pessoa[i].nome);
        printf("Digite o numero do documento: ");
        scanf(" %d", &pessoa[i].numeroDocumento);
        printf("Digite a idade: ");
        scanf(" %d", &pessoa[i].idade);
        printf("=======================================\n");
    }
}

void imprimirDados(Pessoa* pessoa, int qtdPessoa){
    int i;
    for(i=0; i < qtdPessoa; i++){
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Documento: %d\n", pessoa[i].numeroDocumento);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("=======================================\n");
    }
}

void atualizacaoIdade(Pessoa* pessoa, int qtdPessoa){
    int i;
    for(i=0; i < qtdPessoa; i++){
        printf("%s \n", pessoa[i].nome );
        printf("Digite a nova idade: ");
        scanf(" %d", &pessoa[i].idade);
        printf("=======================================\n");
    }
}

void comparacaoIdade(Pessoa* pessoa, int qtdPessoa){
    int i, maisVelha = 0, maisNova = 0;
    for (i = 0; i < qtdPessoa; i++){
        if(pessoa[i].idade > pessoa[maisVelha].idade){
            maisVelha = i;
        }
        
        if (pessoa[i].idade < pessoa[maisVelha].idade){
            maisNova = i;
        }
    }
    
    printf("a pessoa mais velha e %s e a mais nova e %s\n", pessoa[maisVelha].nome, pessoa[maisNova].nome);
}