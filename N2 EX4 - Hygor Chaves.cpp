/*
IFMS - Eng Mec.
Hygor Chaves

4. Faça um algoritmo que calcule o mostre a área de um triângulo. - Sabe-se que: AREA = (base * altura)/2 
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float A, b, h;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	cout <<"Iremos calcular a area de um triangulo."<<endl;
	cout <<"Informe a altura do triângulo:"<<endl;
	cin>>h;
	cout <<"Informe a base do triângulo"<<endl;
	cin>>b;
	A=(b*h)/2;
	
	
	//retonar o valor calculado
	cout <<"A area do triângulo é: "<<A<<endl;
	
	return 0;
}
 
