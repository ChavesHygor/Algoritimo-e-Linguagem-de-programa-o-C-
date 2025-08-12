/*IFMS - Eng Mec.
Hygor Chaves

Exercício 4 – Cadastro de Alunos
*/

#include <iostream>
#include <locale.h>
#include <cstring>
using namespace std;

struct Aluno{
	char nome[41];
	float notas[3];
	float media;
};

Aluno alunos[10];
int total = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");

	cout<<"Cadastro de até 10 alunos:"<<endl;
	for(int i = 0; i < 10; i++){
		cout<<"Digite o nome do aluno "<<i+1<<": "<<endl;
		cin.ignore();
		cin.getline(alunos[i].nome, 41);
		float soma = 0;
		for(int j = 0; j < 3; j++){
			cout<<"Digite a nota "<<j+1<<": ";
			cin>>alunos[i].notas[j];
			soma += alunos[i].notas[j];
		}
		alunos[i].media = soma / 3.0;
		total++;
		char resp;
		cout<<"Deseja cadastrar outro aluno? (s/n): ";
		cin>>resp;
		if(resp == 'n' || resp == 'N') break;
	}

	// 1. Aluno com maior média
	float maiorMedia = alunos[0].media;
	int indiceMaior = 0;
	for(int i = 1; i < total; i++){
		if(alunos[i].media > maiorMedia){
			maiorMedia = alunos[i].media;
			indiceMaior = i;
		}
	}
	cout<<"Aluno com maior média: "<<alunos[indiceMaior].nome<<" ("<<maiorMedia<<")"<<endl;

	// 2. Alunos aprovados
	cout<<"Alunos aprovados:"<<endl;
	for(int i = 0; i < total; i++){
		if(alunos[i].media >= 7.0){
			cout<<alunos[i].nome<<" - Média: "<<alunos[i].media<<endl;
		}
	}

	// 3. Alunos reprovados e média geral
	cout<<"Alunos reprovados:"<<endl;
	float somaTurma = 0;
	for(int i = 0; i < total; i++){
		somaTurma += alunos[i].media;
		if(alunos[i].media < 7.0){
			cout<<alunos[i].nome<<" - Média: "<<alunos[i].media<<endl;
		}
	}
	cout<<"Média geral da turma: "<<(somaTurma/total)<<endl;

	return 0;
}
