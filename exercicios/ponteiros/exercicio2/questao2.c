#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastroGabarito(); 
void cadastroRespostas();
void notasAlunos();
float calculoPorcentAprov(); 

int main(void){
    int i;
    int qtdQuestoes;
    int alunos = 10;
    float * resultado = (float*) malloc(alunos * sizeof(float));
    
    printf("Quantas questoes possui a prova? \n");
    scanf("%d", &qtdQuestoes); //recebendo a quantidade de questoes da prova

    char * gabarito = (char*) malloc(qtdQuestoes * sizeof(char));

    //criando a matriz das respostas dos alunos
    char ** respostas = (char**) malloc(alunos * sizeof(char)); //alocando as linhas da matriz(alunos)
    for (i = 0; i < alunos; i++){
        respostas[i] = (char*) malloc(qtdQuestoes * sizeof(char)); //alocando as colunas(respostas)
    }

    cadastroGabarito(qtdQuestoes, gabarito);
    cadastroRespostas(qtdQuestoes, alunos, respostas);
    notasAlunos(gabarito, respostas, resultado, alunos, qtdQuestoes);  
    
    float aprovadosPorcent = calculoPorcentAprov(resultado, alunos); 
    printf("A porcentagem de aprovados da turma e de %.2f", aprovadosPorcent);

    return 0;
}


void cadastroGabarito(int qtdQuestoes, char * gabarito){
    int i;
    for(i = 0; i < qtdQuestoes; i++){
        printf("Selecione a altenativa da questao %d, de A a E: ", (i + 1));
        scanf(" %c", &gabarito[i]);
    }
}

void cadastroRespostas(int qtdQuestoes, int alunos,char ** respostas){
    int indiceAlunos, indiceQuestao;
    for(indiceAlunos = 0; indiceAlunos < alunos; indiceAlunos++){
        printf("Respostas aluno %d: \n", (indiceAlunos +1 ));

        for(indiceQuestao = 0; indiceQuestao < qtdQuestoes; indiceQuestao++){
            printf("Selecione a altenativa marcada pelo aluno na questao %d: ", (indiceQuestao + 1));
            scanf(" %c", &respostas[indiceAlunos][indiceQuestao]);
        }
    }
} 

void notasAlunos(char * gabarito, char ** respostas, float * resultado, int alunos, int qtdQquestoes){
    int indiceAlunos, indiceQuestao;
    float valorQuestao = 10.0/(float)qtdQquestoes; 
    float notaAluno;

    for (indiceAlunos = 0; indiceAlunos < alunos; indiceAlunos++){
        notaAluno = 0;
        for(indiceQuestao = 0; indiceQuestao < qtdQquestoes; indiceQuestao++){
            if (respostas[indiceAlunos][indiceQuestao] == gabarito[indiceQuestao]){
                notaAluno = notaAluno + valorQuestao;
            }
        }
        resultado[indiceAlunos] = notaAluno;
    }
}

float calculoPorcentAprov(float * resultado, int alunos){
    int i, alunosMedia = 0;
    for ( i = 0; i < alunos; i++){
        if (resultado[i] >= 6){
            alunosMedia++;
        }
    }

    return (((float)alunosMedia * 100.0) / (float)alunos);

} 