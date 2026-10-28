#include<stdio.H>
int main (){
	int m1, m2, m;
	scanf ("%d", &m1);
	scanf ("%d", &m2);
	m = (m1 + m2) / 2;
	if (m <= 5)
	{
		printf ("Voce esta reprovado");
	}
	else
	{
		printf ("Voce esta aprovado");
	}
}
