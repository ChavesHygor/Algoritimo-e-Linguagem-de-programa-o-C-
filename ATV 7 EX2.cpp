/*IFMS - Eng Mec.
Hygor Chaves

2. Fatorial de um número */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
int N;
unsigned long long fatorial = 1;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    //informar brevemente o usuario para que serve o progama e como ele funcionara
    //corrigir acentuação
    system("chcp 1252>nul");

    cout <<"-----------------------------------------"<<endl;
    cout <<"- Iremos calcular o fatorial de um número -"<<endl;
    cout <<"-----------------------------------------"<<endl;

    cout <<"Informe um número inteiro não negativo: "<<endl;
    cin>>N;

    if(N < 0){
        cout <<"Número invalido. Informe um número não negativo."<<endl;
    } else {
        for(int i = 1; i <= N; i++){
            fatorial *= i;
        }
        cout <<"O fatorial de " << N << " é: " << fatorial << endl;
    }

    return 0;
}
