/*IFMS - Eng Mec.
Hygor Chaves

3. Sistema de Descontos de uma Loja Online
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int C;
float P;
//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Digite o c�digo da categoria do produto (1-Eletr�nicos, 2-Vestu�rio, 3-Livros): "<<endl;
	cin>>C;
	cout<<"Digite o valor total da compra: "<<endl;
	cin>>P;
	
	switch(C){
		case 1:
			P=P*0.9;
			cout<<"Valor total com desconto: "<<P;
			break;
		case 2:
			P=P*0.8;
			cout<<"Valor total com desconto: "<<P;
			break;
		case 3:
			P=P*0.95;
			cout<<"Valor total com desconto: "<<P;
			break;
			
		default:
			cout<<"C�digo de categoria inv�lido!";
			break;
	}
	
	return 0;
}
