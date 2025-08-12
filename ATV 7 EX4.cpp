/*IFMS - Eng Mec.
Hygor Chaves

4. Contagem de Dígitos em um número */
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
    //corrigir acentuação
    system("chcp 1252>nul");

    cout <<"-------------------------------------------"<<endl;
    cout <<"- Iremos contar quantos dígitos tem um número -"<<endl;
    cout <<"-------------------------------------------"<<endl;

    cout <<"Informe um número inteiro: "<<endl;
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

    cout <<"O número informado tem " << digitos << " dígito(s)."<<endl;

    return 0;
}
