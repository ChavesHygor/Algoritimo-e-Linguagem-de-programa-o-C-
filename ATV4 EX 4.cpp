/*IFMS - Eng Mec.
Hygor Chaves

/*IFMS - Eng Mec.
Hygor Chaves

4. As ma��s custam R$ 0,30 cada se forem compradas menos do que uma d�zia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o valor total da compra. */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int Q;
float P;
//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"-------------------"<<endl;
	cout <<"- Valor das ma�as -"<<endl;
	cout <<"-------------------"<<endl;
	
	cout <<"Informe a quantia de ma��s: "<<endl;
	cin>>Q;
	
	if (Q<12){
		P=(Q*0.30);
		cout <<"Voc� paraga R$: "<<P<<endl;
	}else{
		P=Q*0.25;
		cout <<"Voc� paraga R$: "<<P<<endl;
	}
	return 0;
}
	
