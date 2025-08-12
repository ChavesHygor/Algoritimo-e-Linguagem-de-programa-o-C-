//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int vetor[15];

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	for(int i=0; i<15; i++){
		vetor[i]=3*(i+1);
		cout<<"A posição "<<i<<" tem valo: "<<vetor[i]<<endl;
		}
	return 0;
}
