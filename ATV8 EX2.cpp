//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float notas[10];
int soma;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	for(int i=0; i<10; i++){
		cout<<"Informe o valor da posição "<<i<<endl;
		cin>>notas[i];
		soma=soma+notas[i];
	}
		cout<<"A soma é: "<<soma<<endl;
	
	return 0;
}
