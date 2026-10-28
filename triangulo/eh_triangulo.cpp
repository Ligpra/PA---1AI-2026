#include<stdio.h>

int triangulo (int n1, int n2, int n3)
{
	if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int eh_triangulo (int n1, int n2, int n3)
{
	if (n1 < n2 + n3)
	{
		if (n2 < n1 + n3)
		{
			if (n3 < n1 + n2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

int main ()
{
	int n1, n2, n3, resp;
	scanf ("%d", &n1);
	scanf ("%d", &n2);
	scanf ("%d", &n3);
	resp = triangulo (n1, n2, n3);
	printf ("%d", resp);
}