/*IFMS - Eng Mec.
Hygor Chaves

4. Avalia��o de Desempenho de um Funcion�rio
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int C;
//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Digite o c�digo de avalia��o (1-5)"<<endl;
	cin>>C;
	
	switch(C){
		case 1:
			cout<<"Muito Insatisfeito";
			break;
		case 2:
			cout<<"Insatisfeito";
			break;
		case 3:
			cout<<"Neutro";
			break;
		case 4:
			cout<<"Satisfeito";
			break;
		case 5:
			cout<<"Muito Satisfeito"<<endl;
			cout<<"Parab�ns pelo excelente atendimento!";
			break;	
		default:
			cout<<"C�digo de avalia��o inv�lido"<<endl;
			break;
	}
	
	return 0;
}
