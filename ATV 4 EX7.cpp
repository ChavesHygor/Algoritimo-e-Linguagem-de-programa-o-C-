/*IFMS - Eng Mec.
Hygor Chaves

 7. Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em cm). Calcular e imprimir o seguinte:
-Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da área 
-Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
-Se o número de lados for igual a 5 escrever PENTÁGONO.  */
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
	
	cout <<"-------------"<<endl;
	cout <<"- Polígonos -"<<endl;
	cout <<"-------------"<<endl;
	
	cout <<"Informe quantos lados tem o polígono"<<endl;
	cin>>l;
	
	
	if (l==3){
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
	}else {
		return 0;
	}
	return 0;
}
	
