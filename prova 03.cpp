/*IFMS - Eng Mec.
Hygor Chaves

3.salario
 */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float vh, h, sb, inss, ir, sind, sl;

//codigo:
int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Quando voc� ganha por hora trabalhada?"<<endl;
	cin>>vh;
	cout<<"Quantas horas voc� trabalhou no m�s?"<<endl;
	cin>>h;
	sb=h*vh;
	cout<<"O sal�rio bruto �: "<<sb<<endl;
	ir=sb*0.11;
	cout<<"Voc� pagou ao IR o valor de:R$ "<<ir<<endl;
	inss=sb*0.08;
	cout<<"Voc� pagou ao INSS o valor de:R$ "<<inss<<endl;
	sind=sb*0.05;
	cout<<"Voc� pagou ao sindicato o valor de:R$ "<<sind<<endl;
	sl=sb-ir-inss-sind;
	cout<<"O sal�rio liquido tem o valor de:R$ "<<sl<<endl;
	
	return 0;
}
