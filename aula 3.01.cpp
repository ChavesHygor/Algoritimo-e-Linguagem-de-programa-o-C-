#include <iostream>

using namespace std;
// variaveis reservadas: int, float, char, if, else, return ...

// variaveis inteiras
// declara��o: int 'nome (nunca come�a por n�)'; int 'nome' = 'valor'; int 'nome1' , 'nome2'
//variaveis com n� com . (decimal) usar float
float nota1, nota2, media;

// endl (pula uma linha)
//scanf("%X", nota2);, X-defini��o d-n� inteiro f-n� com ponto e c-letra

int main(){
	//informar o valor da variavel
	cout <<"informe a nota 1 "<<endl;
	cin>>nota1;
	
	cout <<"informe a nota 2 "<<endl;
	cin>>nota2;
	
	
	media = (nota1 + nota2) / 2;
	//monstrar a variavel
	cout <<"media: "<<media<<endl;
	
	
	
	
	return 0;
	}
