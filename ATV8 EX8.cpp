//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int vetora[6], vetorb[6];


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	for(int i=0; i<6; i++){
		vetora[i]=(3*i*i);//preguiça de digitar 6 valores
		cout<<"Vetora posição "<<i<<" tem valor: "<<vetora[i]<<endl;
		}

	for(int i=0; i<6; i++){
		vetorb[5-i]=vetora[i];
		}
	for(int i=0; i<6; i++){
		cout<<"Vetorb posição "<<i<<" tem valor: "<<vetorb[i]<<endl;
		}
	return 0;
}
