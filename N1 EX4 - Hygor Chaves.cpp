/*
IFMS - Eng Mec.
Hygor Chaves


4. Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o valor do aumento e o novo sal�rio.
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float s, p;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"Iremos calcular o novo salario com a porcentagem informada"<<endl;
	cout <<"Informe o sal�rio atual R$:"<<endl;
	cin>>s;
	cout <<"Informe a porcentagem de aumento:"<<endl;
	cin>>p;
	
	// fazendo a conta
	s=s+(s*(p/100));
	
	//retonar o valor da m�dia
	cout <<"O novo sal�rio � R$: "<<s<<endl;
	return 0;
}
 
