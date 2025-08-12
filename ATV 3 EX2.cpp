/*IFMS - Eng Mec.
Hygor Chaves

2. Classificação de Nota */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
float N;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"-------------------------------"<<endl;
	cout <<"- Iremos classificar sua nota -"<<endl;
	cout <<"-------------------------------"<<endl;
	
	cout <<"Informe sua nota: "<<endl;
	cin>>N;
	
	if(N>=9&&N<=10){
		cout <<"Aprovado com Distinção"<<endl;

	}else if(N>=7&&N<9){
		cout <<"Aprovado"<<endl;
	}else if(N>=5&&N<7){
		cout <<"Recuperação"<<endl;
	}else if(N<5&&N>=0){
		cout <<"Reprovado"<<endl;
	}else {
		cout <<"A nota deve ser de 0 a 10"<<endl;
	}
		
	return 0;
}
