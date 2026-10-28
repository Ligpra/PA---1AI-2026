#include<stdio.h>
int main (){
	//Cedulas de 50, 20 e 10
	int n, c50, c20, c10;
	printf("Digite o valor a ser sacado: ");
	scanf("%d", &n);
	c50 = n / 50;
	n = n % 50;
	c20 = n / 20;
	n = n % 20;
	c10 = n / 10;
	printf("Cedulas de 50 = %d, Cedulas de 20 = %d, Cedulas de 10 = %d", c50, c20, c10)
}
