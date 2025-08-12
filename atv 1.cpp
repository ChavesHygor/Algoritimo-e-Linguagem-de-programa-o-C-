#include <iostream>
#include <locale.h>
using namespace std;
//I++ é a mesma coisa que escrever i=i+1
// I-- é o mesmo que i=i-1
//outras variavei são i+2, i+4, i+5, i-20 etc
int t;
int main(){
	setlocale(LC_ALL, "Portuguese");
	for (int i=1; i<=10; i++){
		t=5*i;
		cout<<""<<t<<endl;
		
	}

	return 0;
}
