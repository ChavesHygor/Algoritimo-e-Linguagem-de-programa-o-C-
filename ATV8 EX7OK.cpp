//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int vetor[12], n, contagem=0;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	for(int i=0; i<12; i++){
		vetor[i]=(3*i*i);//pregui�a de digitar 12 valores
		}
	cout<<"informe o n�mero que sera buscando dentro do vator: "<<endl;
	cin>>n;
	for(int i=0; i<12; i++){
		if(vetor[i]==n){
			contagem++;
		}
		}
	cout<<"O numero "<<n<<" foi contado "<<contagem<<" vezes no vetor"<<endl;
	return 0;
}
