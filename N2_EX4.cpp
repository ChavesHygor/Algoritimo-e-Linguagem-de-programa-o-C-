/*IFMS - Eng Mec.
Hygor Chaves

N2 EX4 - Soma de impares em intervalo definido pelo usuario
*/
#include <iostream>
#include <locale.h>
using namespace std;

int inicio, fim, soma=0;

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Digite o valor inicial: "<<endl;
	cin>>inicio;
	cout<<"Digite o valor final: "<<endl;
	cin>>fim;

	if(inicio>fim){
		cout<<"Intervalo de valores invalido"<<endl;
		return 0;
	}

	for(int i=inicio;i<=fim;i++){
		if(i%2!=0)
			soma+=i;
	}
	cout<<"Soma dos Ampares neste intervalo: "<<soma<<endl;

	return 0;
}
