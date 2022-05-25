//Matheus Guimar�es Rocha - Aula 01 - Exerc�cio 02
//C�digo base em C++
#include <iostream> 
using namespace std;

//Constante
#define MAX 100
using namespace std;

//Defini��o
struct funcionario{
	int matricula;
	char nome[30];
	int qtdDep;
	string cargo;
	float salario;
};

// fun��o principal
int main() {
	//Configura��o
	setlocale(LC_ALL,"portuguese");
	
	//vari�veis (declare aqui os tipos e as vari�veis a usar)
	struct funcionario vetor[MAX]; //vetor de registro, at� 100 funcion�rios
	int i = 0, limite = 0; //Contadores
	char resp; //Resposta para novo Funcion�rio
	float soma = 0, media_salarial = 0;
	
	//In�cio
	cout<< "Lanchol�ndia" << endl;
	//Pula linha
	cout<<endl;
	cout<<"Cadastro de Funcion�rios"<<endl;
	
    //entrada de dados (comandos atribuindo ou solicitando dados)
    do{
    	cout << endl;
    	cout << "Matr�cula: ";
    	cin >> vetor[i].matricula;
    	cout << "Nome: ";
    	cin >> vetor[i].nome;
    	cout << "Quant. Dependentes: ";
    	cin >> vetor[i].qtdDep;
    	cout << "Cargo: ";
    	cin >> vetor[i].cargo;
    	cout << "Sal�rio: ";
    	cin >> vetor[i].salario;
    	cout << "Outro Funcion�rio?";
    	cin >> resp;
    	if(resp == 's'){
		i++;
		} // i passa a ser 1 na posi��o do vetor
	}
	while (resp =='s' && i<MAX); 
	
	//Guardar Quantidade de Funcion�rios cadastrados
	limite = i+1;
	
	//processamento de dados (c�lculos, testes, verifica��es, etc.)
	soma = 0;
	for (int i = 0; i <= limite; i++){
		soma += vetor[i].salario;
	}
	media_salarial = (soma/limite);
	cout << endl;
	cout<<"M�dia Salarial: "<< media_salarial<< endl;
	
	//exibir mnome funcion�rios
	cout << endl;
	cout << "Nomes com sal�rios iguais ou maiores que a m�dia: ";
	for(i=0; i <= limite; i++){
		if(vetor[i].salario >= media_salarial){
			cout << vetor[i].nome <<endl;
		}
	}
    return 0;
} // fim do main()

