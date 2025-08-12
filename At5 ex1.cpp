/*IFMS - Eng Mec.
Hygor Chaves

1. Sistema de Pedidos de uma Cafeteria:
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int op;

//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Bem-vindo à Cafeteria!"<<endl;
	cout<<"Digite o código do café desejado (1-Expresso, 2-Cappuccino, 3-Latte)"<<endl;
	cin>>op;
	
	switch(op){
		case 2: 
			cout<<"Você escolheu: Cappuccino - Preço: R$ 7.50";
			break;
		case 1:
			cout<<"Você escolheu: Expresso - Preço: R$ 5.00";
			break;
		case 3:
			cout<<"Você escolheu: Latte - Preço: R$ 6.50";
			break;
			
		default:
			
			break;
	}
	
	return 0;
}
