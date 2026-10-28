#include<stdio.h>
int main()
{
	float n1, n2, soma;
	
	printf("Digite 2 numeros:");
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	soma = n1 + n2;
	
	printf("Soma = %f", soma);
}