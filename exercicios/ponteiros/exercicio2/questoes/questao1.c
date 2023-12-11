#include <stdio.h>
#include <stdlib.h>

void perguntas();
void femGostaram();
void mascNaoGostaram();

int main(void){
    int continuar;
    int entrevistados = 1;
    int * entrevistadosP = &entrevistados;
    int * perguntaUm = (int*) malloc( (*entrevistadosP) * sizeof(int));
    int * perguntaDois = (int*) malloc( (*entrevistadosP) * sizeof(int));
    
    perguntas(perguntaUm, perguntaDois, entrevistadosP);
    printf("continuar com a pesquisa? 1. Nao / 2. Sim\n");
    scanf("%d", &continuar);

    while(continuar != 1 ){
        ++(*entrevistadosP);
        printf("entrevistados: %d\n", entrevistados);// apagar
        perguntaUm = (int*) realloc(perguntaUm, (*entrevistadosP) * sizeof(int));
        perguntaDois = (int*) realloc(perguntaDois, (*entrevistadosP) * sizeof(int));

        perguntas(perguntaUm, perguntaDois, entrevistadosP);

        printf("continuar com a pesquisa? 1. Nao / 2. Sim\n");
        scanf("%d", &continuar);
    }

    printf("os resultados obtidos foram: \n");
    femGostaram(perguntaUm, perguntaDois, &entrevistados);
    mascNaoGostaram(perguntaUm, perguntaDois, &entrevistados);
    
    
    return 0;
}

void perguntas(int * perguntaUm, int * perguntaDois, int * entrevistados){
    int i = *entrevistados - 1; 
    printf("I. Qual seu sexo? 1. feminino / 2. masculino\n");
    scanf("%d", &perguntaUm[i]);
    printf("II. Gostou do produto?? 1. sim / 2. nao\n");
    scanf("%d", &perguntaDois[i]);
    i++;
}

void femGostaram(int * perguntaUm, int * perguntaDois, int * entrevistadosP){
    int i, quantidade=0;
    float porcentagem;
    for(i = 0; i < (*entrevistadosP); i++ ){
        if (perguntaUm[i] == 1){
            if( perguntaDois[i] == 1){
                quantidade++;
            }
        }
    }

    porcentagem = (100 * quantidade) / (*entrevistadosP);

    printf("a quantidade de mulheres entrevistadas que gostaram do produto é de %.2f \n", porcentagem);
}

void mascNaoGostaram(int * perguntaUm, int * perguntaDois, int * entrevistadosP){
    int i, quantidade=0;
    float porcentagem;
    for(i = 0; i < (*entrevistadosP); i++ ){
        if (perguntaUm[i] == 2){
            if( perguntaDois[i] == 2){
                quantidade++;
            }
        }
    }

    porcentagem = (100 * quantidade) / (*entrevistadosP);

    printf("a quantidade de homens entrevistadas que nao gostaram do produto e de %.2f \n", porcentagem);
}