/*IFMS - Eng Mec.
Hygor Chaves

2. Classifica��o de Triangulo */
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
float a, b, c;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    system("chcp 1252>nul");

    cout <<"--------------------------------------------"<<endl;
    cout <<"- Verifica��o de tipo de tri�ngulo -"<<endl;
    cout <<"--------------------------------------------"<<endl;

    cout <<"Informe os tr�s lados do tri�ngulo: "<<endl;
    cin >> a >> b >> c;

    if((a < b + c) && (b < a + c) && (c < a + b)){
        if(a == b && b == c){
            cout <<"Tri�ngulo Equilatero"<<endl;
        }else if(a == b || a == c || b == c){
            cout <<"Tri�ngulo isosseles"<<endl;
        }else{
            cout <<"Tri�ngulo Escaleno"<<endl;
        }
    }else{
        cout <<"Os valores informados n�o formam um tri�ngulo."<<endl;
    }

    return 0;
}
