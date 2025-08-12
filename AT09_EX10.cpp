/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX10 - Matrizes Bidimensionais (Introdução)
*/
#include <iostream>
#include <locale.h>
using namespace std;

int matriz[2][3]={{1,2,3},{4,5,6}};

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout<<"Elemento na primeira linha, segunda coluna: "<<matriz[0][1]<<endl;
	cout<<"Elemento na segunda linha, primeira coluna: "<<matriz[1][0]<<endl;

	return 0;
}