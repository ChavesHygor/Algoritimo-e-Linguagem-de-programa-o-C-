/*IFMS - Eng Mec.
Hygor Chaves

1. Verificar Maioridade*/
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
float I;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"----------------------------------------------------"<<endl;
	cout <<"- Iremos identificar se o usuario é maior de idade -"<<endl;
	cout <<"----------------------------------------------------"<<endl;
	
	cout <<"Informe sua idade: "<<endl;
	cin>>I;
	
	if(I>=18){
		cout <<"Você é maior de idade"<<endl;

	}else{
		cout <<"Você é menor de idade: "<<endl;
	}
	return 0;
}
