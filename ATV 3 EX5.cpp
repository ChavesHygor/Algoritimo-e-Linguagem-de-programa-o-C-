/*IFMS - Eng Mec.
Hygor Chaves

5. Sistema de Login */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
string U,S;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"---------------------------"<<endl;
	cout <<"- Informe usu�rio e senha -"<<endl;
	cout <<"---------------------------"<<endl;
	
	cout <<"Informe o usu�rio: "<<endl;
	cin>>U;
	cout <<"Informe a senha: "<<endl;
	cin>>S;
	
	if(U=="admin"&& S=="12345"){
		cout <<"Login bem-sucedido!"<<endl;
	}else {
		cout <<"Usu�rio ou senha incorretos"<<endl;
	}
	return 0;
}
