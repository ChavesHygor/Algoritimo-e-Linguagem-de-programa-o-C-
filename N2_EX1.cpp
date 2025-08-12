/*IFMS - Eng Mec.
Hygor Chaves

N2 EX1 - Maior elemento da diagonal principal e soma da diagonal secundaria
*/
#include <iostream>
#include <locale.h>
using namespace std;

int matriz[8][8], maior=0, somaSecundaria=0;

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Digite os elementos da matriz 8x8:"<<endl;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>matriz[i][j];
			if(i==j){
				if(i==0 || matriz[i][j]>maior)
					maior=matriz[i][j];
			}
			if(i+j==7)
				somaSecundaria+=matriz[i][j];
		}
	}
	cout<<"Maior elemento da diagonal principal: "<<maior<<endl;
	cout<<"Soma dos elementos da diagonal secundaria: "<<somaSecundaria<<endl;

	return 0;
}
