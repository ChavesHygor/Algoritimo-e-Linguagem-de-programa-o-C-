#include <iostream>
#include <locale.h>
using namespace std;
//I++ � a mesma coisa que escrever i=i+1
// I-- � o mesmo que i=i-1
//outras variavei s�o i+2, i+4, i+5, i-20 etc
float s=0, m, v;

int main(){
	setlocale(LC_ALL, "Portuguese");
	for (int i=0; i<=10; i++){
		cout<<"informe o valor: "<<endl;
		cin>>v;
		s=s+v;
	}
	m=s/10;
	cout<<"A m�dia �: "<<m<<endl;
	return 0;
}
