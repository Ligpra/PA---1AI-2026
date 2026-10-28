#include<stdio.h>
int main (){
	int km, l, R;
	printf("digite a kilometragem e litros gastos: ");
	scanf("%d", &km);
	scanf("%d", &l);
	R = km / l;
	printf("Km/l = %d", R);
	}
