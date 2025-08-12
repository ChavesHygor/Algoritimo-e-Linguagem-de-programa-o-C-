/*
IFMS - Eng Mec.
Hygor Chaves


4. Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float s, p;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	cout <<"Iremos calcular o novo salario com a porcentagem informada"<<endl;
	cout <<"Informe o salário atual R$:"<<endl;
	cin>>s;
	cout <<"Informe a porcentagem de aumento:"<<endl;
	cin>>p;
	
	// fazendo a conta
	s=s+(s*(p/100));
	
	//retonar o valor da média
	cout <<"O novo salário é R$: "<<s<<endl;
	return 0;
}
 
