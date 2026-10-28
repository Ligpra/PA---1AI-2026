#include<stdio.h>
int main()
{
	int v[5]; int cont;
	for (cont = 0; cont <= 4; cont++)
	{
		scanf ("%d", &v[cont]);
	}
	printf ("%d %d %d %d %d", v[0], v[1], v[2], v[3], v[4]);
	
	// OU
	
	/*
	for (cont = 0; cont <= 4; cont++)
	{
		printf ("v[%d] = %d", cont, v[cont]);
	}
	*/
}