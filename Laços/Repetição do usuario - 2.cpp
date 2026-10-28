#include<stdio.H>
int main (){
	int Test = 1, Num;
	printf ("Quantas vezes deseja repetir? ");
	scanf ("%d", &Num);
	while (Test <= Num)
	{
		printf ("\n Teste");
		Test++;
	}
}
