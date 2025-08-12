/*IFMS - Eng Mec.
Hygor Chaves

Exercicio 1
*/
#include <iostream>
#include <locale.h>
using namespace std;

int numeropessoas, idade, crianca, adolecente, adulto, idoso, soma=0, media;

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Digite a quantia de pessoas:"<<endl;
	cin>>numeropessoas;
	for(int i=0;i<numeropessoas; i++){
		cout<<"Informe a idade da pessoa de número: "<<i+1<<endl;
		cin>>idade;
		if(idade<=12)
			crianca++;
		if(idade>=13 && 	idade<=17)
			adolecente ++;
		if (idade>=18 && idade<=59)
		   adulto++;
  		if (idade>=60)
  		   idoso++;
	   soma=soma+idade;
	}
    cout<<"Temos "<<crianca<<" crianças, "<<adolecente<<" adolecentes, "<<adulto<<" adultos e "<<idoso<<" idosos."<<endl;
	media=soma/numeropessoas;
    cout<<"A média de idade é "<<media<<endl;
	return 0;
}

