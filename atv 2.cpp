#include <iostream>
#include <locale.h>
using namespace std;
//I++ � a mesma coisa que escrever i=i+1
// I-- � o mesmo que i=i-1
//outras variavei s�o i+2, i+4, i+5, i-20 etc
float n, t;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"informe o numero que deseje a taboada: "<<endl;
	cin>>n;
	for (int i=1; i<=10; i++){
		t=n*i;
		cout<<""<<t<<endl;
	}
	return 0;
}
