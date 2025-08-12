/*
IFMS - Eng Mec.
Hygor Chaves


1. Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float n1, n2, n3, m;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	cout <<"A baixo serão solicitadas as três nota separadamente e ao final você terá a média das notas. As notas podem conter dicimais"<<endl;
	cout <<"Informe a nota 1: " <<endl;
	cin >> n1;
	cout <<"Informe a nota 2: " <<endl;
	cin >> n2;
	cout <<"Informe a nota 3: " <<endl;
	cin >> n3;
	
	// fazer a conta da média
	m=(n1+n2+n3)/3;
	
	//retornar valor da média
	cout <<"O valor da média é: "<<m<<endl;
	return 0;
}
 
