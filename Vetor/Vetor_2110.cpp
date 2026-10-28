#include<stdio.h>
int main ()
{
	int v [10] = {67, 49, 69, 42, 11, 10, 24, 8, 27, 14}, ind, valor;
	scanf ("%d", &valor);
	for (ind = 0; ind < 10; ind++)
	{
		if (valor == v[ind])
		{
			printf ("%d", ind);
		}
	}
	
}