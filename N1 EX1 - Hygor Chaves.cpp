/*
IFMS - Eng Mec.
Hygor Chaves


1. Fa�a um algoritmo que receba tr�s notas, calcule e mostre a m�dia aritm�tica entre elas.
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float n1, n2, n3, m;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"A baixo ser�o solicitadas as tr�s nota separadamente e ao final voc� ter� a m�dia das notas. As notas podem conter dicimais"<<endl;
	cout <<"Informe a nota 1: " <<endl;
	cin >> n1;
	cout <<"Informe a nota 2: " <<endl;
	cin >> n2;
	cout <<"Informe a nota 3: " <<endl;
	cin >> n3;
	
	// fazer a conta da m�dia
	m=(n1+n2+n3)/3;
	
	//retornar valor da m�dia
	cout <<"O valor da m�dia �: "<<m<<endl;
	return 0;
}
 
