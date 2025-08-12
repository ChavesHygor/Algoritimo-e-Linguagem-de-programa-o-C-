//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int numeros[7];


int main(){
	setlocale(LC_ALL, "Portuguese");
	for(int i=0; i<7; i++){
		cout<<"Informe o valor da posição: "<<i<<endl;
		cin>>numeros[i];
		}
	int maior=numeros[0];
	for(int i=1; i<7; i++){
		if(numeros[i]>maior){
			maior=numeros[i];
		}
	}
	cout<<"O maior número é: "<<maior<<endl;
	return 0;
}
