#include<stdio.h>

void exibe_multiplos (int n)
{
	int cont, mult;
	for (cont = 1; cont <= 10; cont++)
	{
		mult = n * cont;
		printf ("%d", mult);
	}
}

int main ()
{
	int N;
	scanf ("%d ", &N);
	exibe_multiplos (N);
}