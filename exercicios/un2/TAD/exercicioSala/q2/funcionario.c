#include <stdio.h>
#include <stdlib.h>
#include "funcionario.h"

struct funcionario{
    char funcional[5];
    char nome[20];
    char departamento[20];
    float salario;
};

Funcionario * getDados(FILE * entrada){
    Funcionario * funcionario = (Funcionario *) malloc(sizeof(Funcionario));

    fscanf(entrada, "%s%s%s%f", funcionario->funcional, funcionario->nome, funcionario->departamento,&funcionario->salario);

    return funcionario;
}

int getQtdFuncionarios(FILE * entrada){
    int c;
    int qtdFuncionario= 0;
    while (c = fgetc(entrada) != EOF){
        if (c != '\n'){
            fscanf(entrada, "%d", &qtdFuncionario);
            break;
        } //para pegar o numero de funcionarios
    }
    
    return qtdFuncionario;
}

void copiaDados(FILE * entrada, int qtdFuncionario,Funcionario ** pessoal){
    int c, i;

    while (c = fgetc(entrada) != EOF){
        if (c == '\n'){
            break;
        }
    } //pula a primeira linha

    for(i = 0; i < qtdFuncionario; i++){
        pessoal[i] = getDados(entrada);
    }
}

void imprimeFolhaPagamento(int qtdFuncionario, Funcionario ** pessoal, char depto){
    int i;
    float total =0.0;

    printf("FUNCIONAL\tNOME\tDEPTO\tSALARIO\n");
    for(i = 0; i < qtdFuncionario; i++){
        if (pessoal[i]->departamento[0] == depto){ 
            printf("%s\t%s\t%s\t%.2f\n", pessoal[i]->funcional, pessoal[i]->nome, pessoal[i]->departamento, pessoal[i]->salario);
            total += pessoal[i]->salario;
        }else{
            continue;
        }
        printf("valor total do departamento: R$%.2f", total);
    }
}