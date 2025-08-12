/*
IFMS - Eng Mec.
Hygor Chaves


2. Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse funcionário tem gratificação de R$ 50,00 e paga imposto de 10% sobre o salário base. 
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float s, g, i, r;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	cout <<"Iremos calcular o pagamento com R$ 50 de gratificação e o desconto do imposto."<<endl;
	cout <<"Informe o salário R$:"<<endl;
	cin>>s;
	g=50;
	i=s*0.1;
	r=s+g-i;
	
	
	//retonar o valor calculado
	cout <<"O salário a ser pago é R$: "<<r<<endl;
	return 0;
}
 
