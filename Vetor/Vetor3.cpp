#include<stdio.h>

int repetido (int ve[])
{
	int rep = 0;
	for (int in = 0; in < 10; in++)
	{
		for (int ind = in + 1; ind < 10; ind++)
		{
			if (ve[in] == ve[ind])
			{
				rep = 1;
			}
		}
	}
	return rep;
}

int main ()
{
	int v[10] = {67, 49, 67, 42, 11, 10, 24, 8, 27, 14}, resp;
	resp = repetido (v);
	printf ("%d", resp);
}