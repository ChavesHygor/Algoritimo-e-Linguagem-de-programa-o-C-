/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX9 - Cópia de Matrizes
*/
#include <iostream>
#include <locale.h>
using namespace std;

int original[4]={1,2,3,4}, copia[4];

int main(){
	setlocale(LC_ALL, "Portuguese");

	for(int i=0;i<4;i++){
		copia[i]=original[i];
	}
	cout<<"Elementos copiados: "<<endl;
	for(int i=0;i<4;i++){
		cout<<copia[i]<<endl;
	}

	return 0;
}