/*IFMS - Eng Mec.
Hygor Chaves

4. pre�os
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float c, p, pn, m;

//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe o c�dico do produto: "<<endl;
	cin>>c;
	cout<<"Informe o valor do produto: R$"<<endl;
	cin>>p;
	pn=p+(p*0.2);
	m=(pn+p)/2;
	cout<<"O produto com c�digo: "<<c;
	cout<<", ter� o novo lavor de: R$"<<pn<<endl;
	cout<<"A m�dia dos valores (antigo e novo) �: R$"<<m<<endl;
	return 0;
}
