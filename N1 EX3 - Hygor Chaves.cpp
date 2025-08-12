/*
IFMS - Eng Mec.
Hygor Chaves


3. Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu aumento de 25%. 
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float s;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	cout <<"Iremos calcular o salario final com o aumento de 25% sob o salário informado a baixo"<<endl;
	cout <<"Informe o salário atualR$:"<<endl;
	cin>>s;
	
	
	// fazendo a conta
	s=s+(s/100)*25;
	
	//retonar o valor da média
	cout <<"O novo salário é R$: "<<s<<endl;
	return 0;
}
 
