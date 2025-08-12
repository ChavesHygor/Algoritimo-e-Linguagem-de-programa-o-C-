/*IFMS - Eng Mec.
Hygor Chaves

4. Avaliação de Desempenho de um Funcionário
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
	
	cout<<"Digite o código de avaliação (1-5)"<<endl;
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
			cout<<"Parabéns pelo excelente atendimento!";
			break;	
		default:
			cout<<"Código de avaliação inválido"<<endl;
			break;
	}
	
	return 0;
}
