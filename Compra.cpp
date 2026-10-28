#include<stdio.h>
int main (){
	int preco;
	scanf ("%d", &preco);
	if (preco > 2000){
		preco = preco / 10;
		preco = preco * 9;
	}
	printf ("Valor: %d", preco);
}
