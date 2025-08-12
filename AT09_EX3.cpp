/*IFMS - Eng Mec.
Hygor Chaves

AT09 EX3 - Iterando com um Loop for
*/
#include <iostream>
#include <locale.h>
using namespace std;

char vogais[5] = {'a','e','i','o','u'};

int main(){
	setlocale(LC_ALL, "Portuguese");

	for(int i=0;i<5;i++){
		cout<<vogais[i]<<endl;
	}

	return 0;
}