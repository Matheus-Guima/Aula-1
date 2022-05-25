//Matheus Guimarães Rocha - Aula 01 - Exercício 01
//Código base em C++
#include <iostream> 
using namespace std;

// constante
#define MAX 100

// função principal
int main() {
	//configuração
	setlocale(LC_ALL,"portuguese");
	//variáveis (declare aqui os tipos e as variáveis a usar)
	float notasCurso[MAX]; //vetor
	int qtdAlunosCurso, qtdIgualSuperiorMedia, qtdInferiorMedia, constAlunos;

    //entrada de dados (comandos atribuindo ou solicitando dados)
    cout << "Digite a quantidade de alunos matriculados: ";
    cin >> qtdAlunosCurso;
    
    //leitura das Notas
    for(constAlunos = 0; constAlunos < qtdAlunosCurso; constAlunos++){
		cout << "Digite a "<< constAlunos + 1 <<"a nota: ";
		cin >> notasCurso[constAlunos];
	}
    
	//processamento de dados (cálculos, testes, verificações, etc.)
		//Quantidade de Alunos
		// Notas superior, igual ou inferior
	qtdIgualSuperiorMedia = 0;
	qtdInferiorMedia = 0;
	
	//Obtendo média
	float somaNotas = 0, mediaCurso = 0;
	for(int i = 0; i < qtdAlunosCurso; i++){
		somaNotas = somaNotas + notasCurso[i];
	}
	mediaCurso = somaNotas / qtdAlunosCurso;
	
	for(constAlunos =0; constAlunos < qtdAlunosCurso; constAlunos++){
		if(notasCurso[constAlunos] >= mediaCurso){
		qtdIgualSuperiorMedia++;
		}else{
			qtdInferiorMedia++;
		}
	}
	
	//saida de dados (exibição dos resultados obtidos pelo processamento)
	cout<< " A média do curso foi: " << mediaCurso << endl;
	cout << "O número de Alunos com nota superior ou igual a média foi: " << qtdIgualSuperiorMedia << endl;
	cout << "O número de Alunos com nota inferior a média foi: " << qtdInferiorMedia << endl;
	
	// fim do main()
	return 0;
	
} 

