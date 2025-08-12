/*IFMS - Eng Mec.
Hygor Chaves

4. Verificação de Ano Bissexto */
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
int ano;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    system("chcp 1252>nul");

    cout <<"----------------------------------"<<endl;
    cout <<"- Verificação se um ano é bissexto -"<<endl;
    cout <<"----------------------------------"<<endl;

    cout <<"Informe o ano: "<<endl;
    cin >> ano;

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        cout << ano << " É um ano bissexto." << endl;
    }else{
        cout << ano << " não é um ano bissexto." << endl;
    }

    return 0;
}
