/*IFMS - Eng Mec.
Hygor Chaves

/*IFMS - Eng Mec.
Hygor Chaves

3. Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. Devem ser impressas as seguintes mensagens: ACESSO PERMITIDO caso a senha seja válida. ACESSO NEGADO caso a senha seja inválida.nasceu).   */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis
float S;

//codigo:
int main(){
	setlocale(LC_ALL, "portuguese");
	//informar brevemente o usuario para que serve o progama e como ele funcionara
	//corrigir acentuação
	system("chcp 1252>nul");
	
	cout <<"-------------------------------------------"<<endl;
	cout <<"- Vamos verificar se a senha esta correta -"<<endl;
	cout <<"-------------------------------------------"<<endl;
	
	cout <<"Informe a senha: "<<endl;
	cin>>S;
	
	if (S==1234){
		cout <<"ACESSO PERMITIDO"<<endl;
	}else{
		cout <<"ACESSO NEGADO"<<endl;
	}
	

	return 0;
}
