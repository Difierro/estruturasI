#include <stdio.h>
#include <stdlib.h>

typedef struct funcionarios{
   char nome[20];
   int id;
   float salario;
}Funcionarios;


int main(void){
    Funcionarios * funcionario = malloc(sizeof(Funcionarios));

    printf("digite o nome: ");
    scanf(" %[^\n]", funcionario->nome);
    printf("digite o id: ");
    scanf("%d", &funcionario->id);
    printf("digite o salario: ");
    scanf("%f", &funcionario->salario);

    FILE * saida = fopen("saida.txt", "w");

    fprintf(saida,"nome: %s\nid: %d\nsalario: R$%.2f", funcionario->nome, funcionario->id, funcionario->salario);

    fclose(saida);
    free(funcionario);
    return 0;
}
