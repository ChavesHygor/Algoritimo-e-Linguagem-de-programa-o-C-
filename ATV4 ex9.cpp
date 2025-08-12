/*IFMS - Eng Mec.
Hygor Chaves

9. Escreva um programa para ler 3 valores inteiros e escrever o maior deles. Considere que o usuário não informará valores iguais.*/
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float a,b,c;
//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"-------------------------------------"<<endl;
	cout <<"- Identificar o maior valor entre 3 -"<<endl;
	cout <<"-------------------------------------"<<endl;
	
	cout <<"Informe o primeiro valor: "<<endl;
	cin>>a;
	cout <<"Informe o segundo valor: "<<endl;
	cin>>b;
	cout <<"Informe o terceiro valor: "<<endl;
	cin>>c;
	
	if (a>b && a>c){
		cout <<"O maior é: "<<a<<endl;
	}
	if (b>a && b>c){
		cout <<"O maior é: "<<b<<endl;
	}
	if (c>a && c>b){
		cout <<"O maior é: "<<c<<endl;
	}
	return 0;
}
	
