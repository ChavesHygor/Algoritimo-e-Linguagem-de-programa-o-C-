/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX7 - Contando Ocorrências
*/
#include <iostream>
#include <locale.h>
using namespace std;

int dados[8]={1,5,2,5,8,5,3,5}, contagem=0;

int main(){
	setlocale(LC_ALL, "Portuguese");

	for(int i=0;i<8;i++){
		if(dados[i]==5){
			contagem++;
		}
	}
	cout<<"O número 5 aparece "<<contagem<<" vezes na matriz."<<endl;

	return 0;
}