/*IFMS - Eng Mec.
Hygor Chaves

2. Fatorial de um n�mero */
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
    //corrigir acentua��o
    system("chcp 1252>nul");

    cout <<"-----------------------------------------"<<endl;
    cout <<"- Iremos calcular o fatorial de um n�mero -"<<endl;
    cout <<"-----------------------------------------"<<endl;

    cout <<"Informe um n�mero inteiro n�o negativo: "<<endl;
    cin>>N;

    if(N < 0){
        cout <<"N�mero invalido. Informe um n�mero n�o negativo."<<endl;
    } else {
        for(int i = 1; i <= N; i++){
            fatorial *= i;
        }
        cout <<"O fatorial de " << N << " �: " << fatorial << endl;
    }

    return 0;
}
