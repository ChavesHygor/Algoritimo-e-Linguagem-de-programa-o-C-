#include <iostream>

using namespace std;
// variaveis reservadas: int, float, char, if, else, return ...

// variaveis inteiras
// declaração: int 'nome (nunca começa por nº)'; int 'nome' = 'valor'; int 'nome1' , 'nome2'
int nota1, nota2;

// endl (pula uma linha)


int main(){
	//atribuição direta
	nota1 = 9;
	//nota2 = nota1;
	
	//informar o valor da variavel
	cout <<"informe a nota2: "<<endl;
	cin>>nota2;
	//scanf("%X", nota2), d-n° inteiro f-n° com ponto e c-letra
	
	//monstrar a variavel
	cout <<"valor de nota 1: "<<nota1<<endl;
	cout <<"valor de nota 2: "<<nota2<<endl;
	
	
	
	return 0;
	}
