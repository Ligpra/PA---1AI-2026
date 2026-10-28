#include<stdio.h>
int main(){
	int n1, nf, x = 1;
	scanf ("%d", &n1);
	while (x <= 10)
	{
		nf = n1 * x;
		printf ("\n %d * %d = %d", n1, x, nf);
		x++;
	}
}
