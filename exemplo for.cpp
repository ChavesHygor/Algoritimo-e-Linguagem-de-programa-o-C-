#include <iostream>
#include <locale.h>
using namespace std;
//I++ � a mesma coisa que escrever i=i+1
// I-- � o mesmo que i=i-1
//outras variavei s�o i+2, i+4, i+5, i-20 etc
int main(){
	setlocale(LC_ALL, "Portuguese");
	for (int i=9; i<101; i++){
		if(i%2==0){
		cout<<"valor do i: "<<i<<endl;
	}

	}
	
	
	return 0;	
}
