#include<stdio.h>
int main (){
	int n, fato, cont;
	fato = 5;
	scanf ("%d", &n);
	for(cont = 1; cont <= n; cont++){
		fato = fato * n;
		printf ("%d", fato);
	}
}
