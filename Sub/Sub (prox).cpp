#include <stdio.h>

float prox_numero1 (float num1)
{
	return num1 + 1;
}

float prox_numero2 (float num2)
{
	return num2 + 1;
}

float prox_numero3 (float num3)
{
	return num3 + 1;
}


int main()
{
float n1, n2, n3, resp;

scanf ("%f", &n1);
scanf ("%f", &n2);
scanf ("%f", &n3);

resp = prox_numero1 (n1);
printf ("\n Numero 1: %.2f", resp);

resp = prox_numero2 (n2);
printf ("\n Numero 1: %.2f", resp);

resp = prox_numero3 (n3);
printf ("\n Numero 3: %.2f", resp);
}