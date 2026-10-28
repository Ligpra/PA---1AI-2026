#include<stdio.h>
int main(){
	int n, c, m;
	scanf ("%d", &n);
	for(c = 1; c <= 10; c++){
		m = n;
		m = m * c;
		printf ("\n %d", m);
	}
}
