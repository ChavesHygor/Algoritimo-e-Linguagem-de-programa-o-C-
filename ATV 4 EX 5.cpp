/*IFMS - Eng Mec.
Hygor Chaves

5. Escreva um programa para ler 3 valores inteiros (considere que n�o ser�o lidos valores iguais) e escrev�-los em ordem crescente.   */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float N1, N2, N3;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"-------------------------------------------"<<endl;
	cout <<"- Entre tr�s valores retornaremos o maior -"<<endl;
	cout <<"-------------------------------------------"<<endl;
	
	cout <<"Informe o primeiro valor: "<<endl;
	cin>>N1;
	cout <<"Informe o segundo valor: "<<endl;
	cin>>N2;
	cout <<"Informe o terceiro valor: "<<endl;
	cin>>N3;
	
	if(N1>N2 && N1>N3){
		cout <<"o maior valor �: "<<N1<<endl;
	}else if(N2>N1 && N2>N3) {
		cout <<"o maior valor �: "<<N2<<endl;
	}else {
		cout <<"o maior valor �: "<<N3<<endl;
	}
	return 0;
}
