/*IFMS - Eng Mec.
Hygor Chaves

3. Sequencia de Fibonacci */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
int N, t1 = 0, t2 = 1, proximo;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    //informar brevemente o usuario para que serve o progama e como ele funcionara
    //corrigir acentuação
    system("chcp 1252>nul");

    cout <<"------------------------------------------------"<<endl;
    cout <<"- Iremos imprimir os N primeiros termos da sequência de Fibonacci -"<<endl;
    cout <<"------------------------------------------------"<<endl;

    cout <<"Informe quantos termos deseja ver: "<<endl;
    cin>>N;

    cout <<"Sequência de Fibonacci: "<<endl;

    for(int i = 1; i <= N; i++){
        cout << t1 << " ";
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    cout << endl;

    return 0;
}
