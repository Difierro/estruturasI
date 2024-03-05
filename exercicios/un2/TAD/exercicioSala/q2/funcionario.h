/*Definição de um novo tipo de dado: Funcionario*/
typedef struct funcionario Funcionario;

/*Fução que guarda dados de um funcionari, e retorna um ponteiro para essa estrutura*/
Funcionario * getDados(FILE * entrada);

/*Função que guarda o numero de funcionarios e retorna esse valor*/
int getQtdFuncionarios(FILE * entrada);

/*Função que copia os dados de um funcionario e aloca para um array*/
void copiaDados(FILE * entrada, int qtdFuncionario,Funcionario ** pessoal);

/*Função que imprime os dados de cada funcionario por setor*/
void imprimeFolhaPagamento(int qtdFuncionario, Funcionario ** pessoal, char depto);