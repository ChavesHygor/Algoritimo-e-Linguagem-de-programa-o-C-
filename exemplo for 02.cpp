#include <iostream>
#include <locale.h>
using namespace std;
//I++ é a mesma coisa que escrever i=i+1
// I-- é o mesmo que i=i-1
//outras variavei são i+2, i+4, i+5, i-20 etc
float s=0, m, v;

int main(){
	setlocale(LC_ALL, "Portuguese");
	for (int i=0; i<=10; i++){
		cout<<"informe o valor: "<<endl;
		cin>>v;
		s=s+v;
	}
	m=s/10;
	cout<<"A média é: "<<m<<endl;
	return 0;
}
