#include <stdio.h>
#include <stdlib.h>

typedef struct fruta{
    char nome[20];
    float preco;
}Fruta;

int main(void){
    int i;
    int qtdFrutas = 0;
    int opcao = 1;
    Fruta * fruta = malloc(sizeof(Fruta));

    while(opcao == 1){
        qtdFrutas++;
        i = qtdFrutas - 1;
        fruta = realloc(fruta, qtdFrutas * sizeof(Fruta));

        printf("digite o nome da fruta: ");
        scanf(" %[^\n]", fruta[i].nome);
        printf("digite o preco da fruta: ");
        scanf("%f", &fruta[i].preco);
        printf("Fruta cadastrada!\n\n");
        printf("deseja cadastrar mais frutas? 1.SIM | 2.NAO\n");
        scanf("%d", &opcao);
    }

    FILE * saida = fopen("frutas.txt", "w");
    for(i = 0; i < qtdFrutas; i++){
        fprintf(saida, "%s\tR$%.2f\n", fruta[i].nome, fruta[i].preco);
    }
    printf("programa encerrado!");
    fclose(saida);
    free(fruta);

    return 0;
}
