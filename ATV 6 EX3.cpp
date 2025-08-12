/*IFMS - Eng Mec.
Hygor Chaves

3. Calculo das raizes de uma equa��o do segundo grau */
#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

//definir as variaveis:
float a, b, c, delta, x1, x2;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    system("chcp 1252>nul");

    cout <<"---------------------------------------------------"<<endl;
    cout <<"- Calculo das raizes reais de uma equa��o do 2� grau -"<<endl;
    cout <<"---------------------------------------------------"<<endl;

    cout <<"Informe o valor de A: "<<endl;
    cin >> a;

    if(a == 0){
        cout <<"A equa��o n�o � do segundo grau."<<endl;
        return 0;
    }

    cout <<"Informe o valor de B: "<<endl;
    cin >> b;
    cout <<"Informe o valor de C: "<<endl;
    cin >> c;

    delta = (b*b) - (4 * a * c);

    if(delta < 0){
        cout <<"A equa��o n�oo possui raizes reais."<<endl;
    }else if(delta == 0){
        x1 = -b / (2 * a);
        cout <<"A equa��o possui uma raiz real: x = " << x1 << endl;
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout <<"A equa��o possui duas raizes reais: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}
