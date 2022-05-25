//Matheus Guimar�es Rocha - Aula 01 - Exerc�cio 01
//C�digo base em C++
#include <iostream> 
using namespace std;

// constante
#define MAX 100

// fun��o principal
int main() {
	//configura��o
	setlocale(LC_ALL,"portuguese");
	//vari�veis (declare aqui os tipos e as vari�veis a usar)
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
    
	//processamento de dados (c�lculos, testes, verifica��es, etc.)
		//Quantidade de Alunos
		// Notas superior, igual ou inferior
	qtdIgualSuperiorMedia = 0;
	qtdInferiorMedia = 0;
	
	//Obtendo m�dia
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
	
	//saida de dados (exibi��o dos resultados obtidos pelo processamento)
	cout<< " A m�dia do curso foi: " << mediaCurso << endl;
	cout << "O n�mero de Alunos com nota superior ou igual a m�dia foi: " << qtdIgualSuperiorMedia << endl;
	cout << "O n�mero de Alunos com nota inferior a m�dia foi: " << qtdInferiorMedia << endl;
	
	// fim do main()
	return 0;
	
} 

