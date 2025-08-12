//IFMS - Eng Mec.
//Hygor Chaves

//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
int vetor[10], n, posicao = -1;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//preenche o vetor com valores de escolha
	for(int i = 0; i < 10; i++){
		vetor[i] = 2 * (i + 1);           // aqui escolhi múltiplos de 2
		cout << "A posição " << i << " tem valor: " << vetor[i] << endl;
	}
	
	cout << "Informe o número que será buscado dentro do vetor:" << endl;
	cin >> n;
	
	//busca linear
	for(int i = 0; i < 10; i++){
		if(vetor[i] == n){
			posicao = i;
			break;                       // sai assim que encontrar
		}
	}
	
	if(posicao != -1){
		cout << "Número encontrado na posição " << posicao << endl;
	} else {
		cout << "Número não encontrado" << endl;
	}
	
	return 0;
}

