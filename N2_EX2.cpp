/*IFMS - Eng Mec.
Hygor Chaves

N2 EX2 - Busca e contagem em um vetor
*/
#include <iostream>
#include <locale.h>
using namespace std;

int vetor[20], X, contagem=0;

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Digite 20 valores:"<<endl;
	for(int i=0;i<20;i++){
		cin>>vetor[i];
	}

	cout<<"Digite o valor X a ser buscado:"<<endl;
	cin>>X;

	for(int i=0;i<20;i++){
		if(vetor[i]==X)
			contagem++;
	}
	if(contagem>0)
		cout<<"O valor "<<X<<" foi encontrado "<<contagem<<" vezes."<<endl;
	else
		cout<<"O valor "<<X<<" não foi encontrado."<<endl;

	return 0;
}
