#include <stdio.h>

float calcular_media(float num1, float num2, float num3)
{
	float cal;
	cal = (num1 + num2 + num3) / 3;
	return cal;
}

float calcular_delta(float num1, float num2, float num3)
{
	return (num2 * num2) - 4 * num1 * num3;
}


int main()
{
	float n1, n2, n3, resp, ne1, ne2, ne3;
	printf ("Digite tres numeros: ");
	scanf ("%f", &n1);
	scanf ("%f", &n2);
	scanf ("%f", &n3);
	
	resp = calcular_media (n1, n2, n3);
	printf ("\n Resposta = %.2f", resp);
	
	resp = calcular_delta (n1, n2, n3);
	printf ("\n Delta = %.2f", resp);
}