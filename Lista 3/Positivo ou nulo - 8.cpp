#include<stdio.H>
int main (){
	int n;
	scanf ("%d", &n);
	if (n > 0)
	{
		printf ("Positivo");
	}
	else
	{
		if (n < 0)
		{
			printf ("Negativo");
		}
		else
		{
			printf ("Nulo");
		}
	}
}
