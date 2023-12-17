#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    char nome[50];
    char cargo[25];
    int identificador;
    float salario;
};

void cadastroFuncionario(struct funcionario* colaborador);
void imprimirDadosFuncionario(struct funcionario* colaborador);
void alterarSalario(struct funcionario* colaborador);
void maiorSalario(struct funcionario* colaborador);

int main(void){
    int i = 0;
    struct funcionario* colaborador = malloc(5 * sizeof(struct funcionario));

    for (i = 0; i < 5; i++){
        cadastroFuncionario(&colaborador[i]); //assim a função ta pegando os elementos um por um, colaborador[0], depois o colaborafor[1], ...
    }

    for (i = 0; i < 5; i++){
        imprimirDadosFuncionario(&colaborador[i]);  
    }

    for (i = 0; i < 5; i++){
        alterarSalario(&colaborador[i]);  
    }

    maiorSalario(colaborador); //aqui ele está pegando o array completo e fará a "filtragem" dentro da funçao maiorSalario
    
    return 0;
}

void cadastroFuncionario(struct funcionario* colaborador){
    printf("Digite o nome do funcionario: ");
    scanf(" %49s", colaborador->nome);
    getchar();
    printf("Digite o cargo: ");
    scanf(" %24s", colaborador->cargo);
    printf("Digite o identificador (valor inteiro): ");
    scanf(" %d", &colaborador->identificador);
    printf("Digite o salario: ");
    scanf(" %f", &colaborador->salario);
}

void imprimirDadosFuncionario(struct funcionario* colaborador){
    printf("======================================================\n");
    printf("Colaborador: %s\n", colaborador->nome);
    printf("Cargo: %s\n", colaborador->cargo);
    printf("Identificador: %d\n", colaborador->identificador);
    printf("Salario: R$%.2f\n", colaborador->salario);
}

void alterarSalario(struct funcionario* colaborador){
        printf("digite o novo valor do salario do colaborador %d: ", colaborador->identificador);
        scanf(" %f", &colaborador->salario);    
}

void maiorSalario(struct funcionario* colaborador){
    int i = 0;
    int maior = 0;
    for (i = 0; i < 5; i++){
        if(colaborador[i].salario > colaborador[maior].salario){
            maior = i;
        }
    }

    printf("O colaborador com o maior salario e %s, com um salario de R$%.2f.\n", colaborador[maior].nome, colaborador[maior].salario);

    free(colaborador);
}
