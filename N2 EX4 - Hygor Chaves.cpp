/*
IFMS - Eng Mec.
Hygor Chaves

4. Fa�a um algoritmo que calcule o mostre a �rea de um tri�ngulo. - Sabe-se que: AREA = (base * altura)/2 
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float A, b, h;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"Iremos calcular a area de um triangulo."<<endl;
	cout <<"Informe a altura do tri�ngulo:"<<endl;
	cin>>h;
	cout <<"Informe a base do tri�ngulo"<<endl;
	cin>>b;
	A=(b*h)/2;
	
	
	//retonar o valor calculado
	cout <<"A area do tri�ngulo �: "<<A<<endl;
	
	return 0;
}
 
