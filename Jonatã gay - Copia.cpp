#include<stdio.h>
#include<locale>
int main()
{
setlocale(LC_ALL,"portuguese");
int k, m, b=0, c, d, a1, a2, a3, a4; 
printf("Bem-vindo(a)!");
do
{

printf("vote em um constestante.\n1-Carlos\n2-Jonatã\n3-Bryan\n4-Marcos\n5-Nulo\n6-Branco\nVoto:");
scanf("%d", &k);
b++;
if (k==5)
{ 
	c++;
}
else if (k==6)
{ 
	d++;
}
else if (k==1)
{
	a1++;
}
else if (k==2)
{
a2++;
}
else if (k==3)
{
	a3++;
} 
else if (k==4)
{
	a4++;
}
else if (k < 1)
{
	printf("voto ínvalido, nenhum voto contado.");
}
else if (k>6)
{
	printf("Voto ínvalido, nenhum voto contado");
}
printf("\n\nDeseja votar novamente?\n\n0-Não\n\nOpção:");
scanf("%d", &m);
}while(m!=0);

	printf("\nTotal de votos:\nCarlos:%d\njonatã:%d\nBryan:%d\nMarcos:%d\nNulo:%d\nBranco:%d", a1, a2, a3 - 35, a4, c - 1, d);
	
	return 0;
}
