//Matheus Guimarães Rocha - Aula 01 - Exercício 02
//Código base em C++
#include <iostream> 
using namespace std;

//Constante
#define MAX 100
using namespace std;

//Definição
struct funcionario{
	int matricula;
	char nome[30];
	int qtdDep;
	string cargo;
	float salario;
};

// função principal
int main() {
	//Configuração
	setlocale(LC_ALL,"portuguese");
	
	//variáveis (declare aqui os tipos e as variáveis a usar)
	struct funcionario vetor[MAX]; //vetor de registro, até 100 funcionários
	int i = 0, limite = 0; //Contadores
	char resp; //Resposta para novo Funcionário
	float soma = 0, media_salarial = 0;
	
	//Início
	cout<< "Lancholândia" << endl;
	//Pula linha
	cout<<endl;
	cout<<"Cadastro de Funcionários"<<endl;
	
    //entrada de dados (comandos atribuindo ou solicitando dados)
    do{
    	cout << endl;
    	cout << "Matrícula: ";
    	cin >> vetor[i].matricula;
    	cout << "Nome: ";
    	cin >> vetor[i].nome;
    	cout << "Quant. Dependentes: ";
    	cin >> vetor[i].qtdDep;
    	cout << "Cargo: ";
    	cin >> vetor[i].cargo;
    	cout << "Salário: ";
    	cin >> vetor[i].salario;
    	cout << "Outro Funcionário?";
    	cin >> resp;
    	if(resp == 's'){
		i++;
		} // i passa a ser 1 na posição do vetor
	}
	while (resp =='s' && i<MAX); 
	
	//Guardar Quantidade de Funcionários cadastrados
	limite = i+1;
	
	//processamento de dados (cálculos, testes, verificações, etc.)
	soma = 0;
	for (int i = 0; i <= limite; i++){
		soma += vetor[i].salario;
	}
	media_salarial = (soma/limite);
	cout << endl;
	cout<<"Média Salarial: "<< media_salarial<< endl;
	
	//exibir mnome funcionários
	cout << endl;
	cout << "Nomes com salários iguais ou maiores que a média: ";
	for(i=0; i <= limite; i++){
		if(vetor[i].salario >= media_salarial){
			cout << vetor[i].nome <<endl;
		}
	}
    return 0;
} // fim do main()

