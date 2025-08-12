/*
IFMS - Eng Mec.
Hygor Chaves

desvio condicionado */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
float n1, n2, m;
char classe; // recebe um caracter (letra, número ou simbolo); classe = 'A';
//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"-------------------------------------------------------------------------"<<endl;
	cout <<"- Iremos calcular a média e dizer se o aluno está aprovado ou reprovado -"<<endl;
	cout <<"-------------------------------------------------------------------------"<<endl;
	
	cout <<"Informe a primeira nota: "<<endl;
	cin>>n1;
	cout <<"Informe a segunda nota: "<<endl;
	cin>>n2;

	m=(n1+n2)/2;
	
	
	//Expressão: <variavel> == valor - igual; 
	//Expressão: <variavel> > valor - maior;
	//Expressão: <variavel> < valor - menor;
	//Expressão: <variavel> <= valor - menor ou igual;
	//Expressão: <variavel> >= valor - maior ou igual;
	//Expressão: <variavel> != valor - diferente;
	
	//if(m >= 6.0){ //se verdadeiro
	//	cout <<"A média é: "<<m<<endl;
	//	cout <<"Aluno APROVADO"<<endl;
	//}
	
	// se falso
	//if(m >= 6.0){ 
	//	cout <<"Aluno APROVADO"<<endl;
	//}	else{
	//		cout <<"A média é: "<<m<<endl;
	//		cout <<"Aluno APROVADO"<<endl;
	//}
	// se são duas ou mais condições necessarias para realizar a função usamos && para juntar as condições
	// se é ao menos uma condição para realizar usamos || para escolher as condições
	if(m >= 7.0){ 
		cout <<"A média é: "<<m<<endl;
		cout <<"Aluno APROVADO"<<endl;
		
	} else if (m>=4.0 && m<7.0){
			cout <<"A média é: "<<m<<endl;
			cout <<"Aluno DE EXAME"<<endl;
			cout <<"Informe se sua classe é A, B ou C: "<<endl;
			cin>>classe;
			
			if (classe == 'A'){
				cout <<"A prova da classe A é na sala B202"<<endl;
			}else if (classe =='B'){
				cout <<"A prova da classe B é na sala C204"<<endl;
			}else if (classe == 'C'){
				cout <<"A prova da classe C é na sala F101"<<endl;
			}else{
				cout <<"A classe informada não exixte."<<endl;
			}
			
	} else{
			cout <<"A média é: "<<m<<endl;
			cout <<"Aluno REPROVADO"<<endl;
			
	}
	
	return 0;
}
 
