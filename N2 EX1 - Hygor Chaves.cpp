/*
IFMS - Eng Mec.
Hygor Chaves


1. Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o sal�rio e paga imposto de 7% sobre o sal�rio. 
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float s, g, i, r;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"Iremos calcular o pagamento com 5% de gratifica��o e o desconto do imposto."<<endl;
	cout <<"Informe o sal�rio R$:"<<endl;
	cin>>s;
	g=s*0.05;
	i=s*0.07;
	r=s+g-i;
	
	
	//retonar o valor calculado
	cout <<"O sal�rio a ser pago � R$: "<<r<<endl;
	return 0;
}
 
