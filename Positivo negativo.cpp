#include<stdio.h>
int main (){
	int N;
	printf ("Coloque um numero: ");
	scanf ("%d", &N);
	if (N < 0){
		N = N - N - N;
	}
	printf ("%d", N);
}
