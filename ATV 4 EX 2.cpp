/*IFMS - Eng Mec.
Hygor Chaves

/*IFMS - Eng Mec.
Hygor Chaves

2. Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio considerar o m�s em que ela nasceu).    */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float A,P;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"--------------------------------------"<<endl;
	cout <<"- Vamos verificar permis�o apra votar -"<<endl;
	cout <<"--------------------------------------"<<endl;
	
	cout <<"Informe seu ano de anscimento "<<endl;
	cin>>A;
	P=2025-A;
	
	if (P>=16){
		cout <<"Idade suficeinte para votar"<<endl;
	}else{
		cout <<"Idade insuficiente para votar"<<endl;
	}
	

	return 0;
}
