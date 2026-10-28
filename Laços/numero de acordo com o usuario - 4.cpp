#include<stdio.H>
int main (){
	int cont = 1, Num;
	printf ("Quantas vezes deseja repetir? ");
	scanf ("%d", &Num);
	while (cont <= Num)
	{
		printf ("\n %d", cont);
		cont++;
	}
}
