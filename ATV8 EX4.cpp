//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int numeros[8], total;
float media;

int main(){
	setlocale(LC_ALL, "Portuguese");
	for(int i=0; i<8; i++){
		cout<<"Informe o valor da posi��o: "<<i<<endl;
		cin>>numeros[i];
		total=total+numeros[i];
		}
	media=total/8;
	cout<<"A m�dia �: "<<media<<endl;
	
	return 0;
}
