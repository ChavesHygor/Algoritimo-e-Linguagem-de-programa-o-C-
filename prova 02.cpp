/*IFMS - Eng Mec.
Hygor Chaves

2.Receber notas e avaliar
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float p1, p2, e, m;

//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Entre com a nota da prova 1"<<endl;
	cin>>p1;
	cout<<"Entre com a nota da prova 2"<<endl;
	cin>>p2;
	m=(p1+p2)/2;
	if (m>=7 && m<=10){
		cout<<"APROVADO"<<endl;
	}
	else if (m<=6.9 && m>=4){
		cout<<"Em EXAME final"<<endl;
		cout<<"Entre com a nota do EXAME"<<endl;
		cin>>e;
		m=m+e;
		if(m>=10){
			cout<<"APROVADO"<<endl;
		}
		else {
			cout<<"REPROVADO"<<endl;
	}}
	else if(m<4){
		cout<<"REPROVADO"<<endl;
	}
	else{
		cout<<"Cada nota deve ser de 0 a 10"<<endl;
	}
	return 0;
}
