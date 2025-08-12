/*IFMS - Eng Mec.
Hygor Chaves

8. Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso. - Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO. - Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.   */
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
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"-----------------"<<endl;
	cout <<"- Polígonos 2.0 -"<<endl;
	cout <<"-----------------"<<endl;
	
	cout <<"Informe quantos lados tem o polígono"<<endl;
	cin>>l;
	
	
	if (l<3){
		cout <<"Não é um polígono"<<endl;
	}else if (l==3){
		cout <<"informe o comprimento do lado em cm: "<<endl;
		cin>>s;
		a=((s*s)*(1.7320))/4;
		cout <<"Triângulo com área de: "<<a<<endl;
	}else if(l==4){
		cout <<"informe o comprimento do lado em cm: "<<endl;
		cin>>s;
		a=s*s;
		cout <<"Quadrado com área de: "<<a<<endl;
	}else if (l==5){
		cout <<"Pentagono"<<endl;
	}if (l>5){
		cout <<"POLÍGONO NÃO IDENTIFICADO"<<endl;

	}
	return 0;
}
	
