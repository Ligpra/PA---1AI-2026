#include<stdio.h>
int main (){
	int nt, n, c;
	nt = 0;
	for(c = 1; c <= 10; c++){
		scanf ("%d", &n);
		nt = nt + n;
	}
	printf ("%d", nt);
}
