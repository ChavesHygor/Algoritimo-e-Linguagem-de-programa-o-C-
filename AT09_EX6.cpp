/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX6 - Encontrando o Maior Elemento
*/
#include <iostream>
#include <locale.h>
using namespace std;

int alturas[6]={170,185,165,190,175,180}, maior=alturas[0];

int main(){
	setlocale(LC_ALL, "Portuguese");

	for(int i=1;i<6;i++){
		if(alturas[i]>maior){
			maior=alturas[i];
		}
	}
	cout<<"O maior valor da matriz é: "<<maior<<endl;

	return 0;
}