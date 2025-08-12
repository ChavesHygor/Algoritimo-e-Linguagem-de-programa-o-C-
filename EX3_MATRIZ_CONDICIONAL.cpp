/*IFMS - Eng Mec.
Hygor Chaves

Exercício 3 – Matriz com Operação Condicional
*/

#include <iostream>
#include <locale.h>
using namespace std;

// função para verificar se um número é primo
bool ehPrimo(int n){
	if(n <= 1) return false;
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int matriz[5][5], contPrimos = 0, somaAbaixo = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");

	cout<<"Digite os elementos da matriz 5x5:"<<endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin>>matriz[i][j];

			if(i == j && ehPrimo(matriz[i][j])){
				contPrimos++;
			}

			if(i > j){
				somaAbaixo += matriz[i][j];
			}

			if(matriz[i][j] < 0){
				matriz[i][j] = 0;
			}
		}
	}

	cout<<"Quantidade de números primos na diagonal principal: "<<contPrimos<<endl;
	cout<<"Soma dos elementos abaixo da diagonal principal: "<<somaAbaixo<<endl;

	cout<<"Matriz ajustada:"<<endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
