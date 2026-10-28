#include<stdio.H>
int main (){
	int av1, av2, av3, av;
	scanf ("%d", &av1);
	scanf ("%d", &av2);
	scanf ("%d", &av3);
	av = (av1 + av2 + av3) / 3;
	if (av < 6)
	{
		printf ("reprovado");
	}
	else
	{
		printf ("aprovado");
	}
}
