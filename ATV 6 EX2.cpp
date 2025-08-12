/*IFMS - Eng Mec.
Hygor Chaves

2. Classificação de Triangulo */
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
    cout <<"- Verificação de tipo de triângulo -"<<endl;
    cout <<"--------------------------------------------"<<endl;

    cout <<"Informe os três lados do triângulo: "<<endl;
    cin >> a >> b >> c;

    if((a < b + c) && (b < a + c) && (c < a + b)){
        if(a == b && b == c){
            cout <<"Triângulo Equilatero"<<endl;
        }else if(a == b || a == c || b == c){
            cout <<"Triângulo isosseles"<<endl;
        }else{
            cout <<"Triângulo Escaleno"<<endl;
        }
    }else{
        cout <<"Os valores informados não formam um triângulo."<<endl;
    }

    return 0;
}
