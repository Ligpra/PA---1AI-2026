// Felipe Saul Lino
#include<stdio.h>

int main()
{
	float v[5] = {4.5, 12.6, 7.7, 10.0, 2.5}, maior;
	int ind, ind2;
	printf ("Questao 1 - Indices pares:");
	for (ind = 0; ind < 5; ind++)
	{
		if (ind != 0)
			ind2 = ind - 1;
		else
			ind2 = ind;
		if (ind % 2 == 0)
		{
			printf (" %.1f", v[ind]);
		}
		if (v[ind2] <= v[ind])
			maior = v[ind];
		else
			maior = v[ind2];
	}
	printf ("\nQuestao 2 - Maior no vetor: %.1f", maior);
}