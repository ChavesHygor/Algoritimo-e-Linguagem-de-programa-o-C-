/*IFMS - Eng Mec.
Hygor Chaves

 7. Escreva um programa para ler o n�mero de lados de um pol�gono regular e a medida do lado (em cm). Calcular e imprimir o seguinte:
-Se o n�mero de lados for igual a 3 escrever TRI�NGULO e o valor da �rea 
-Se o n�mero de lados for igual a 4 escrever QUADRADO e o valor da sua �rea.
-Se o n�mero de lados for igual a 5 escrever PENT�GONO.  */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float l, s, a;
//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	
	cout <<"-------------"<<endl;
	cout <<"- Pol�gonos -"<<endl;
	cout <<"-------------"<<endl;
	
	cout <<"Informe quantos lados tem o pol�gono"<<endl;
	cin>>l;
	
	
	if (l==3){
		cout <<"informe o comprimento do lado em cm: "<<endl;
		cin>>s;
		a=((s*s)*(1.7320))/4;
		cout <<"Tri�ngulo com �rea de: "<<a<<endl;
	}else if(l==4){
		cout <<"informe o comprimento do lado em cm: "<<endl;
		cin>>s;
		a=s*s;
		cout <<"Quadrado com �rea de: "<<a<<endl;
	}else if (l==5){
		cout <<"Pentagono"<<endl;
	}else {
		return 0;
	}
	return 0;
}
	
