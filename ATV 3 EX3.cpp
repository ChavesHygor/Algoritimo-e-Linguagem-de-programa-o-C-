/*IFMS - Eng Mec.
Hygor Chaves

3.Par ou �mpar */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
int N,R;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"---------------------------------------------------------"<<endl;
	cout <<"- Iremos classificar se o n�mero inteiro � par ou �mpar -"<<endl;
	cout <<"---------------------------------------------------------"<<endl;
	
	cout <<"Informe o n�mero: "<<endl;
	cin>>N;
	R=N%2;
	
	if(R==0){
		cout <<"O n�mero � Par"<<endl;
	}else {
		cout <<"O n�mero � �mpar"<<endl;
	}
		
	return 0;
}
