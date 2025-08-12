/*IFMS - Eng Mec.
Hygor Chaves

Exercicio 2
*/
#include <iostream>
#include <locale.h>
using namespace std;

int vetor[15], multiplo, maiorimpar, posineg=-1, i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite o número para inserir no vetor"<<endl;
	for (i=0;i<15;i++){
		cin>>vetor[i];
		if(vetor[i]%3==0 && vetor[i]%5==0){
	 		multiplo++;}
  		if(vetor[i]%2 !=0 && vetor[i]>maiorimpar){
			maiorimpar=vetor[i];}
		if(vetor[i]<0 && posineg==-1){
			posineg=i;}
}
	
	if(posineg!=-1){
	cout<<"Existem "<<multiplo<<" número multiplo de 3 e 5 simultaneamente"<<endl;
	cout<<"O maior número impar é: "<<maiorimpar<<endl;
	cout<<" O primeiro negativo tem a posição: "<<posineg<<endl;
}
	if(posineg==-1){
	
	cout<<"Existem "<<multiplo<<" número multiplo de 3 e 5 simultaneamente"<<endl;
	cout<<"O maior número impar é: "<<maiorimpar<<endl;
	cout<<"Não existe número negativo"<<endl;
}
 return 0;
}
