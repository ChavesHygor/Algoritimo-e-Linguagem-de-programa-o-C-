/*IFMS - Eng Mec.
Hygor Chaves

5. Impress�o de Padr�o (Tri�ngulo Invertido) */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
int linhas;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    //informar brevemente o usuario para que serve o progama e como ele funcionara
    //corrigir acentua��o
    system("chcp 1252>nul");

    cout <<"-------------------------------------------------"<<endl;
    cout <<"- Iremos imprimir um tri�ngulo invertido de asteriscos -"<<endl;
    cout <<"-------------------------------------------------"<<endl;

    cout <<"Informe o n�mero de linhas: "<<endl;
    cin >> linhas;

    for(int i = linhas; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
