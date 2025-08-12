/*IFMS - Eng Mec.
Hygor Chaves

4. preços
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
	cout<<"Informe o códico do produto: "<<endl;
	cin>>c;
	cout<<"Informe o valor do produto: R$"<<endl;
	cin>>p;
	pn=p+(p*0.2);
	m=(pn+p)/2;
	cout<<"O produto com código: "<<c;
	cout<<", terá o novo lavor de: R$"<<pn<<endl;
	cout<<"A média dos valores (antigo e novo) é: R$"<<m<<endl;
	return 0;
}
