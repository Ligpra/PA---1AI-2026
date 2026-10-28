#include <stdio.h>
int prox_num_par1 (int num1)
{
	int num;
	num = num1 % 2;
	if (num == 0)
	{
		return num1 + 2;
	}
	else
	{
		return num1 + 1;
	}
}

int prox_num_par2 (int num2)
{
	int num;
	num = num2 % 2;
	if (num == 0)
	{
		return num2 + 2;
	}
	else
	{
		return num2 + 1;
	}
}

int prox_num_par3 (int num3)
{
	int num;
	num = num3 % 2;
	if (num == 0)
	{
		return num3 + 2;
	}
	else
	{
		return num3 + 1;
	}
}

int main ()
{
	int n1, n2, n3, resp;
	scanf ("%d", &n1);
	scanf ("%d", &n2);
	scanf ("%d", &n3);
	resp = prox_num_par1 (n1);
	printf ("\n Resposta: %d", resp);
	
	resp = prox_num_par2 (n2);
	printf ("\n Resposta: %d", resp);
	
	resp = prox_num_par3 (n3);
	printf ("\n Resposta: %d", resp);
}