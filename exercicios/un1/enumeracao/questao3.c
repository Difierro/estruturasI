#include<stdio.h>
#include<stdlib.h>

typedef enum mes{
    janeiro = 1,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
}Mes;

typedef struct data{
    int dia;
    Mes mes;
    int ano;
}Data;

void preencherDados(Data * data){
    printf("Digite o dia: ");
    scanf("%d", &data->dia);
    printf("Digite o mes (exemplo: 1 para janeiro): ");
    scanf("%d", &data->mes);
    printf("Digite o ano: ");
    scanf("%d", &data->ano);
}

void lerDados(Data * data){
    printf("%02d / %02d / %d", data->dia, data->mes, data->ano);
}

int main(void){
    Data * data = malloc(sizeof(Data));
    preencherDados(data);
    lerDados(data);
    return 0;
}