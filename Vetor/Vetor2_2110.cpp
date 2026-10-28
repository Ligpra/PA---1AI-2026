#include<stdio.h>

void vetor (int num, int ve[10])
{
	int ind, es = 0;
	for (ind = 0; ind < 10; ind++)
	{
		if (num == ve[ind])
		{
			printf ("Valor esta no vetor (posicao %d)\n", ind);
			es = 1;
		}
	}
	if (es == 0)
	{
		printf ("Valor nao esta no vetor");
	}
}

int vetor2 (int num, int ve[10])
{
	int ind, es;
	for (ind = 0; ind < 10; ind++)
	{
		if (num == ve[ind])
		{
			es = 1;
		}
	}
	if (es == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main ()
{
	int n, v[10] = {67, 49, 69, 42, 11, 10, 24, 8, 27, 14}, in;
	scanf ("%d", &n);
	printf ("\nProcedimento\n");
	vetor (n, v);
	in = vetor2 (n, v);
	printf ("\n\nFuncao\n");
	if (in == 1)
	{
		printf ("Esta no vetor");
	}
	else
	{
		printf ("Nao esta no vetor");
	}
}