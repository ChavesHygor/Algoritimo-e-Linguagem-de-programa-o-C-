/*IFMS - Eng Mec.
Hygor Chaves

3.Par ou Ímpar */
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
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"---------------------------------------------------------"<<endl;
	cout <<"- Iremos classificar se o número inteiro é par ou ímpar -"<<endl;
	cout <<"---------------------------------------------------------"<<endl;
	
	cout <<"Informe o número: "<<endl;
	cin>>N;
	R=N%2;
	
	if(R==0){
		cout <<"O número é Par"<<endl;
	}else {
		cout <<"O número é ímpar"<<endl;
	}
		
	return 0;
}
