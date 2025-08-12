/*IFMS - Eng Mec.
Hygor Chaves

N2 EX3 - Maior, menor e media das notas
*/
#include <iostream>
#include <locale.h>
using namespace std;

float notas[10], maior, menor, soma=0, media;

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Digite as 10 notas dos alunos:"<<endl;
	for(int i=0;i<10;i++){
		cin>>notas[i];
		soma+=notas[i];
		if(i==0 || notas[i]>maior)
			maior=notas[i];
		if(i==0 || notas[i]<menor)
			menor=notas[i];
	}
	media=soma/10;
	cout<<"Maior nota: "<<maior<<endl;
	cout<<"Menor nota: "<<menor<<endl;
	cout<<"Média aritmética: "<<media<<endl;

	return 0;
}
