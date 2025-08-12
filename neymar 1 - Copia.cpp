#include<stdio.h>
#include<locale>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int i, a[10];
	for (i=0;i>10;i++)
	{
		printf("Escreva o %do numero: ", i);
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			a[i] = 0;
		}
		else if (a[i] % 2 != 0)
		{
			a[i] = 1;
		}
	}
	

	return 0;
}
 
