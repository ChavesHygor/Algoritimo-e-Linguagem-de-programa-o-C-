/*
IFMS - Eng Mec.
Hygor Chaves


2. Fa�a um algoritmo que receba tr�s notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.
*/
//biblioteca basica c++:
#include <iostream>
using namespace std;

//definir as variaveis:
float n1, n2, n3, m, p1, p2, p3;

//codigo:
int main(){
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentua��o
	system("chcp 1252>nul");
	cout <<"Abaixo ser�o solicitadas as notas e seus respectivos pesos em seguida (ambos podem ser decimais)"<<endl;
	cout <<"Informe a nota 1:"<<endl;
	cin>>n1;
	cout <<"Informe o peso da nota 1:"<< endl;
	cin>>p1;
	
	cout <<"Informe a nota 2:"<< endl;
	cin>>n2;
	cout <<"Informe o peso da nota 2:"<< endl;
	cin>>p2;
	
	cout <<"Informe a nota 3:"<< endl;
	cin>>n3;
	cout <<"Informe o peso da nota 3:"<< endl;
	cin>>p3;
	
	// fazendo a conta
	m= ((p1*n1)+(p2*n2)+(p3*n3))/(p1+p2+p3);
	
	//retonar o valor da m�dia
	cout <<"A m�dia �: "<<m<<endl;
	return 0;
}
 
