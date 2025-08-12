/*IFMS - Eng Mec.
Hygor Chaves

4. Analisando Temperatura */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
float T;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"------------------------------------"<<endl;
	cout <<"- Iremos classificar a temperatura -"<<endl;
	cout <<"------------------------------------"<<endl;
	
	cout <<"Informe a temperatura em ºC: "<<endl;
	cin>>T;
	
	if(T<0){
		cout <<"Temperatura abaixo de zero"<<endl;
	}else if(T>=0&&T<=15){
		cout <<"Frio"<<endl;
	}else if(T>=16&&T<=25){
		cout <<"Agradável"<<endl;
	}else {
		cout <<"Quente"<<endl;
	}
		
	return 0;
}
