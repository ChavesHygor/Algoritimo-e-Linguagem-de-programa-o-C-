/*IFMS - Eng Mec.
Hygor Chaves

8. Acrescente as seguintes mensagens � solu��o do exerc�cio anterior conforme o caso. - Caso o n�mero de lados seja inferior a 3 escrever N�O � UM POL�GONO. - Caso o n�mero de lados seja superior a 5 escrever POL�GONO N�O IDENTIFICADO.   */
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
	
	cout <<"-----------------"<<endl;
	cout <<"- Pol�gonos 2.0 -"<<endl;
	cout <<"-----------------"<<endl;
	
	cout <<"Informe quantos lados tem o pol�gono"<<endl;
	cin>>l;
	
	
	if (l<3){
		cout <<"N�o � um pol�gono"<<endl;
	}else if (l==3){
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
	}if (l>5){
		cout <<"POL�GONO N�O IDENTIFICADO"<<endl;

	}
	return 0;
}
	
