#include<stdio.h>

int main ()
{
	int v[5] = {23, 46, 67, 87, 12}, ind, soma = 0;
	
	// ex 1
	for (ind = 4; ind >= 0; ind--)
	{
		printf ("\nV[%d] = %d", ind, v[ind]);
	}
	
	// ex 2
	for (ind = 0; ind < 5; ind++)
	{
		soma = soma + v[ind];
	}
	printf ("\n\n%d\n", soma);
	
	// ex 3
	for (ind = 0; ind < 5; ind++)
	{
		if (v[ind] % 2 == 0)
		{
			printf ("\n%d", v[ind]);
		}
	}
	
	// ex 4
	soma = 0;                                                              
	for (ind = 0; ind < 5; ind++)
	{
		if (v[ind] >= 10 && v[ind] <= 30)
		{
			soma = soma + 1;
		}
	}
	printf ("\n%d numeros estao entre 10 e 30", soma);
}
