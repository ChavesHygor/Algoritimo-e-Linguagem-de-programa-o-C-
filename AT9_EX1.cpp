/*IFMS - Eng Mec.
Hygor Chaves

AT9 EX1 
*/
#include <iostream>
#include <locale.h>
using namespace std;

int numeros[5] = {10, 20, 30, 40, 50};

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"O terceiro elemento da matriz é: "<<numeros[2]<<endl;

	return 0;
}
