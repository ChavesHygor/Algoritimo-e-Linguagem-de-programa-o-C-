/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX4 - Leitura de Entrada do Usuário
*/
#include <iostream>
#include <locale.h>
using namespace std;

int idades[3];

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Digite 3 idades:"<<endl;
	for(int i=0;i<3;i++){
		cin>>idades[i];
	}
	cout<<"Idades digitadas:"<<endl;
	for(int i=0;i<3;i++){
		cout<<idades[i]<<endl;
	}

	return 0;
}