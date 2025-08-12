/*IFMS - Eng Mec.
Hygor Chaves

1. Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e escrever o maior deles.  */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float N1, N2;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"-------------------------------------------"<<endl;
	cout <<"- Entre dois valores retornaremos o maior -"<<endl;
	cout <<"-------------------------------------------"<<endl;
	
	cout <<"Informe o primeiro valor: "<<endl;
	cin>>N1;
	cout <<"Informe o segundo valor: "<<endl;
	cin>>N2;
	
	if(N1>N2){
		cout <<"o maior valor é: "<<N1<<endl;
	}else {
		cout <<"o maior valor é: "<<N2<<endl;
	}
	return 0;
}
