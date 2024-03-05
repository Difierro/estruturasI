#include <stdio.h>
#include <stdlib.h>
#include "funcionario.h"

int main(void){
    FILE * entrada = fopen("entrada.txt","rt");

    Funcionario * funcionario = getDados(entrada);

    int qtdFuncionario = getQtdFuncionarios(entrada);

    Funcionario ** pessoal = (Funcionario **) malloc(qtdFuncionario * sizeof(Funcionario*));

    copiaDados(entrada, qtdFuncionario, pessoal);

    imprimeFolhaPagamento(qtdFuncionario, pessoal, 'A');
    imprimeFolhaPagamento(qtdFuncionario, pessoal, 'B');
    imprimeFolhaPagamento(qtdFuncionario, pessoal, 'C');

    return 0;
}