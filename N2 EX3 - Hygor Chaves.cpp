/*
IFMS - Eng Mec.
Hygor Chaves


3. Fa�a um algoritmo que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.  
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float d, r, i, j;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"Iremos calcular o valor do rendimento e o total investido."<<endl;
	cout <<"Informe do dep�sito R$:"<<endl;
	cin>>d;
	cout <<"Informe a taxa de juros em %:"<<endl;
	cin>>j;
	r=d*(j/100);
	i=d+r;
	
	
	//retonar o valor calculado
	cout <<"O Valor do rendimento � "<<r<<endl;
	cout <<"O Valor total investido � � "<<i<<endl;
	return 0;
}
 
