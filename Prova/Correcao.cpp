#include<stdio.h>
int main()
{
	float v[5] = {4.5, 2.6, 7.7, 10.0, 2.5}, maior = v[0];
	int ind;
	printf ("1) ");
	for (ind = 0; ind < 5; ind++)
	{
		if (ind % 2 == 0)
			printf("%.1f ", v[ind]);
	}
	for(ind =  1; ind , 5; ind++)
	{
		if (v[ind] > maior)
			maior = v[ind];
	}
	printf("\n2) Maior = %.1f", maior)
}