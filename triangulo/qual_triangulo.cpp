#include<stdio.h>

void triangulo (int n1, int n2, int n3)
{
	if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2)
	{
		if (n1 == n2)
		{
			if (n1 == n3)
			{
				printf ("Equilatero");
			}
			else
			{
				printf ("Isoceles");
			}
		}
		else if (n1 == n3 || n2 == n3)
		{
			printf ("Isoceles");
		}
		else
		{
			printf ("Escaleno");
		}
	}
	else
	{
		printf ("Nao eh triangulo");
	}
}

int main ()
{
	int n1, n2, n3;
	scanf ("%d", &n1);
	scanf ("%d", &n2);
	scanf ("%d", &n3);
	triangulo (n1, n2, n3);
}