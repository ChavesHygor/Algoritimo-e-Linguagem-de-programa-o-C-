/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX2 - Acessando e Modificando Elementos
*/
#include <iostream>
#include <locale.h>
using namespace std;

int notas[4] = {75,80,92,60};

int main(){
	setlocale(LC_ALL, "Portuguese");

	notas[1] = 85;
	cout<<"Elementos da matriz atualizados: "<<endl;
	for(int i=0;i<4;i++){
		cout<<notas[i]<<endl;
	}

	return 0;
}