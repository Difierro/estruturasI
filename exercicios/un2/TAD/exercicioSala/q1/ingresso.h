/*Definição de um novo tipo de dado: Ingresso*/
typedef struct ingresso Ingresso;

/*Função que preenche quecebe um vetor de ingresso e preenche*/
void preencherDados(Ingresso * ingresso, int qtdIngressos);

/*função que imprime os dados do ingresso*/
void imprimirDados(Ingresso * ingresso, int qtdIngressos);

/*função que altera o valor dos ingressos*/
void alterarPreco(Ingresso * ingresso, int qtdIngressos);

/*função que compara e imprime o ingresso de maior e menor valor*/
void imprimeMaiorMenorPreco(Ingresso * ingresso, int qtdIngressos);