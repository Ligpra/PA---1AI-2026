#include<stdio.h>

float maior_n2 (float num1, float num2)
{
	float maior;
	if (num1 > num2)
	{
		maior = num1;
	}
	else
	{
		maior = num2;
	}
	return maior;
}

int main()
{
	float n1, n2, resp;
	printf ("Digite os dois numeros: \n");
	scanf ("%f", &n1);
	scanf ("%f", &n2);
	
	resp = maior_n2 (n1, n2);
	printf ("O maior eh: %.2f", resp);
}