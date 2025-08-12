/*IFMS - Eng Mec.
Hygor Chaves

6. Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes Fórmulas: - para homens: (72.7 * Altura) – 58 - para mulheres: (62.1 * Altura) – 44.7 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float p, s;
//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"----------------------"<<endl;
	cout <<"- Calculo peso ideal -"<<endl;
	cout <<"---------------------"<<endl;
	
	cout <<"Informe sua altura: "<<endl;
	cin>>h;
	cout <<"Informe (1) se femenino e (2) masculino de : "<<endl;
	cin>>s;
	
	if (s==1){
		p=(62.1*h)-44.7;
		cout <<"Seu peso ideal em kg é: "<<p<<endl;
	}else{
		p=(72.7*h)-58;
		cout <<"Seu peso ideal em kg é: "<<p<<endl;
	}
	return 0;
}
	
