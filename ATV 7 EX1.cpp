/*IFMS - Eng Mec.
Hygor Chaves

1. Média Artimédica de N Notas */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
int N;
float nota, soma, media;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    //informar brevemente o usuario para que serve o progama e como ele funcionara
    //corrigir acentuaÃ§Ã£o
    system("chcp 1252>nul");

    cout <<"---------------------------------------------"<<endl;
    cout <<"- Iremos calcular a média de N notas inseridas -"<<endl;
    cout <<"---------------------------------------------"<<endl;

    cout <<"Informe quantas notas deseja inserir: "<<endl;
    cin>>N;

    soma = 0;
    for(int i = 1; i <= N; i++){
        cout <<"Informe a nota " << i << ": ";
        cin >> nota;
        soma += nota;
    }

    media = soma / N;
    cout <<"A média das notas é: " << media << endl;

    return 0;
}
