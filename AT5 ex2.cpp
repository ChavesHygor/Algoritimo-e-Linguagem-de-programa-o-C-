/*IFMS - Eng Mec.
Hygor Chaves

2. Conversor de Unidades de Temperatura
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float T1, T2 ;
char UN1, UN2;
//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Conversor de temperatura"<<endl;
	cout<<"Converter de  (C, F, K)"<<endl;
	cin>>UN1;
	
	switch(UN1){
		case 'C': 
			cout<<"Informe o valor da temperatura: ";
			cin>>T1;
			cout<<"\nConverter para (C, F, K):"<<endl;
			cin>>UN2;
			if (UN2=='C'){
				T2=T1;
				cout<<"O valor convertido para Celsius é: "<<T2;
			}
			else if(UN2=='F'){
				T2=(T1*59)+32;
				cout<<"O valor convertido para Fahrenheit é: "<<T2;
			}
			else if(UN2=='K'){
				T2=T1+273.3;
				cout<<"O valor convertido para Kelvin é: "<<T2;
			}
			else {
				cout<<"Unidade desconhecida";
		}
			break;
			
		case 'F':
			cout<<"Informe o valor da temperatura: ";
			cin>>T1;
			cout<<"\nConverter para (C, F, K):"<<endl;
			cin>>UN2;
			if (UN2=='C'){
				T2=(T1-32)*95;
				cout<<"O valor convertido para Celsius é: "<<T2;
			}
			else if(UN2=='F'){
				T2=T1;
				cout<<"O valor convertido para Fahrenheit é: "<<T2;
			}
			else if(UN2=='K'){
				T2=((T1-32)*95)+273.15;
				cout<<"O valor convertido para Kelvin é: "<<T2;
			}
			else {
				cout<<"Unidade desconhecida";
			}
			break;
			
		case 'K':
			cout<<"Informe o valor da temperatura: ";
			cin>>T1;
			cout<<"\nConverter para (C, F, K):"<<endl;
			cin>>UN2;
			if (UN2=='C'){
				T2=(T1-273.15);
				cout<<"O valor convertido para Celsius é: "<<T2;
			}
			else if(UN2=='F'){
				T2=((T1-273.15)*59)+32;
				cout<<"O valor convertido para Fahrenheit é: "<<T2;
			}
			else if(UN2=='K'){
				T2=T1;
				cout<<"O valor convertido para Kelvin é: "<<T2;
			}
			else {
				cout<<"Unidade desconhecida";
			}
			break;
			
		default:
			
			break;
	}
	return 0;
}
