#include<stdio.h>
#include<locale>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int i, a[5];
	
	for (i=0;i<6;i++)
	{
		printf("Escreva o %do. numero: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 5; i >= 0;i--)
	
		printf("%d\t", a[i]);
	
	return 0;
}
 
