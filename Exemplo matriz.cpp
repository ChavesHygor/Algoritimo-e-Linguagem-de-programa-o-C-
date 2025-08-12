#include <iostream>
#include <locale.h>
using namespace std;

int mat[3][3], maior = 0 ; 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Escrevendo na Matriz
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){	
			cout<<"Informe um valor para a pos: [ "<<i<<" ][ "<<j<<" ]"<<endl;
			cin>>mat[i][j];			
		}	
			
	}	

	cout<<"Lendo a Matriz"<<endl<<endl;

	for(int i = 0; i < 3; i++){
		cout<<"| ";		
		for(int j = 0; j < 3; j++){			
			cout<<mat[i][j]<<" ";
			
			if(maior < mat[i][j]){
				maior = mat[i][j];
			}			
						
		}
		cout<<"|"<<endl;		
	}	
	cout<<"O maior valor e: "<<maior;			
return 0;}
