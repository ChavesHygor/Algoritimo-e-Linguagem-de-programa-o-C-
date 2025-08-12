//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int vetorA[5], vetorB[5];


int main(){
	setlocale(LC_ALL, "Portuguese");
	vetorA[0]=1;
	vetorA[1]=2;
	vetorA[2]=3;
	vetorA[3]=4;
	vetorA[4]=5;
	
	for(int i=0; i<5; i++){
		vetorB[i]=vetorA[i];
		cout<<"O vetorB na posição "<<i<<" tem valor: "<<vetorB[i]<<endl;
		}
		
	return 0;
}
