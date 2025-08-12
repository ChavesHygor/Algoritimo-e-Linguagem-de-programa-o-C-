/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX5 - Soma dos Elementos de uma Matriz
*/
#include <iostream>
#include <locale.h>
using namespace std;

int precos[5]={15,25,10,5,30}, soma=0;

int main(){
	setlocale(LC_ALL, "Portuguese");

	for(int i=0;i<5;i++){
		soma += precos[i];
	}
	cout<<"A soma dos elementos é: "<<soma<<endl;

	return 0;
}