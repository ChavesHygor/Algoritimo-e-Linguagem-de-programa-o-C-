/*
IFMS - Eng Mec.
Hygor Chaves


3. Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu aumento de 25%. 
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float s;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"Iremos calcular o salario final com o aumento de 25% sob o sal�rio informado a baixo"<<endl;
	cout <<"Informe o sal�rio atualR$:"<<endl;
	cin>>s;
	
	
	// fazendo a conta
	s=s+(s/100)*25;
	
	//retonar o valor da m�dia
	cout <<"O novo sal�rio � R$: "<<s<<endl;
	return 0;
}
 
