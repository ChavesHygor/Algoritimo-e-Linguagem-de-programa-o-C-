/*
IFMS - Eng Mec.
Hygor Chaves


2. Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o seu sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de R$ 50,00 e paga imposto de 10% sobre o sal�rio base. 
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
	cout <<"Iremos calcular o pagamento com R$ 50 de gratifica��o e o desconto do imposto."<<endl;
	cout <<"Informe o sal�rio R$:"<<endl;
	cin>>s;
	g=50;
	i=s*0.1;
	r=s+g-i;
	
	
	//retonar o valor calculado
	cout <<"O sal�rio a ser pago � R$: "<<r<<endl;
	return 0;
}
 
