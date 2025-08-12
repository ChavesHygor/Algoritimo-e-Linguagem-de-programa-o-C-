#include<stdio.h>
#include<locale>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int i, a[11], g;
	
		printf("Escreva o %do numero: ", i);
		scanf("%d", &g); 
	for (i=1;i<12;i++)	
	
	{
	
		if (g % i == 0)
		{
			a[i] = 1;
		}
		else if (g % i != 0) 
		{
			a[i] = 0;
		}
	}
	printf ("%d %d %d %d %d %d %d %d %d %d %d",  a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11]);

	return 0;
}
 
