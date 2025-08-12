//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int numeros[5];


int main(){
	numeros[0]=10;
	numeros[1]=20;
	numeros[2]=30;
	numeros[3]=40;
	numeros[4]=50;
	for(int i=0; i<5; i++){
		cout<<numeros[i]<<endl;
		
	}
	
	return 0;
}
