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
char classe; // recebe um caracter (letra, n�mero ou simbolo); classe = 'A';
//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"-------------------------------------------------------------------------"<<endl;
	cout <<"- Iremos calcular a m�dia e dizer se o aluno est� aprovado ou reprovado -"<<endl;
	cout <<"-------------------------------------------------------------------------"<<endl;
	
	cout <<"Informe a primeira nota: "<<endl;
	cin>>n1;
	cout <<"Informe a segunda nota: "<<endl;
	cin>>n2;

	m=(n1+n2)/2;
	
	
	//Express�o: <variavel> == valor - igual; 
	//Express�o: <variavel> > valor - maior;
	//Express�o: <variavel> < valor - menor;
	//Express�o: <variavel> <= valor - menor ou igual;
	//Express�o: <variavel> >= valor - maior ou igual;
	//Express�o: <variavel> != valor - diferente;
	
	//if(m >= 6.0){ //se verdadeiro
	//	cout <<"A m�dia �: "<<m<<endl;
	//	cout <<"Aluno APROVADO"<<endl;
	//}
	
	// se falso
	//if(m >= 6.0){ 
	//	cout <<"Aluno APROVADO"<<endl;
	//}	else{
	//		cout <<"A m�dia �: "<<m<<endl;
	//		cout <<"Aluno APROVADO"<<endl;
	//}
	// se s�o duas ou mais condi��es necessarias para realizar a fun��o usamos && para juntar as condi��es
	// se � ao menos uma condi��o para realizar usamos || para escolher as condi��es
	if(m >= 7.0){ 
		cout <<"A m�dia �: "<<m<<endl;
		cout <<"Aluno APROVADO"<<endl;
		
	} else if (m>=4.0 && m<7.0){
			cout <<"A m�dia �: "<<m<<endl;
			cout <<"Aluno DE EXAME"<<endl;
			cout <<"Informe se sua classe � A, B ou C: "<<endl;
			cin>>classe;
			
			if (classe == 'A'){
				cout <<"A prova da classe A � na sala B202"<<endl;
			}else if (classe =='B'){
				cout <<"A prova da classe B � na sala C204"<<endl;
			}else if (classe == 'C'){
				cout <<"A prova da classe C � na sala F101"<<endl;
			}else{
				cout <<"A classe informada n�o exixte."<<endl;
			}
			
	} else{
			cout <<"A m�dia �: "<<m<<endl;
			cout <<"Aluno REPROVADO"<<endl;
			
	}
	
	return 0;
}
 
