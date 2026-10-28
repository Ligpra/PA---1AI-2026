#include<stdio.H>
int main (){
	int n1, n2;
	scanf ("%d", &n1);
	scanf ("%d", &n2);
	n1 = n1 + 1;
	while (n1 < n2)
	{
		printf ("\n %d", n1);
		n1++;
	}
}
