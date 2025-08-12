/*IFMS - Eng Mec.
Hygor Chaves

1. receber valores e calcular media
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float x, y, z, m;

//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Entre com o valor X"<<endl;
	cin>>x;
	cout<<"Entre com o valor y"<<endl;
	cin>>y;
	cout<<"Entre com o valor z"<<endl;
	cin>>z;
	m=(x+y+z)/3;
	cout<<"A média aritimédica é: "<<m<<endl;
	
	return 0;
}
