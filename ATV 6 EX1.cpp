/*IFMS - Eng Mec.
Hygor Chaves

1. Calculo de Conceito por média de Notas */
#include <iostream>
#include <locale.h>
using namespace std;

//definir as variaveis:
float n1, n2, media;
char conceito;

//codigo:
int main(){
    setlocale(LC_ALL, "portuguese");
    system("chcp 1252>nul");

    cout <<"---------------------------------------------"<<endl;
    cout <<"- Calculo de media, conceito e situação final -"<<endl;
    cout <<"---------------------------------------------"<<endl;

    cout <<"Informe a primeira nota: "<<endl;
    cin >> n1;
    cout <<"Informe a segunda nota: "<<endl;
    cin >> n2;

    media = (n1 + n2) / 2;

    if(media >= 9.0 && media <= 10.0){
        conceito = 'A';
    }else if(media >= 7.5){
        conceito = 'B';
    }else if(media >= 6.0){
        conceito = 'C';
    }else if(media >= 4.0){
        conceito = 'D';
    }else{
        conceito = 'E';
    }

    cout <<"Nota 1: " << n1 << ", Nota 2: " << n2 << endl;
    cout <<"Média: " << media << endl;
    cout <<"Conceito: " << conceito << endl;

    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        cout <<"APROVADO" << endl;
    }else{
        cout <<"REPROVADO" << endl;
    }

    return 0;
}
