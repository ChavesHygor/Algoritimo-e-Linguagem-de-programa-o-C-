/*IFMS - Eng Mec.
Hygor Chaves

4. Contagem de D�gitos em um n�mero */
//biblioteca basica c++:
#include <iostream>
#include <locale.h>
#include <cstdlib> 
using namespace std;

//definir as variaveis:
int numero, digitos = 0;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    //informar brevemente o usuario para que serve o progama e como ele funcionara
    //corrigir acentua��o
    system("chcp 1252>nul");

    cout <<"-------------------------------------------"<<endl;
    cout <<"- Iremos contar quantos d�gitos tem um n�mero -"<<endl;
    cout <<"-------------------------------------------"<<endl;

    cout <<"Informe um n�mero inteiro: "<<endl;
    cin >> numero;

    if(numero == 0){
        digitos = 1;
    } else {
        int temp = abs(numero);
        while(temp > 0){
            temp /= 10;
            digitos++;
        }
    }

    cout <<"O n�mero informado tem " << digitos << " d�gito(s)."<<endl;

    return 0;
}
