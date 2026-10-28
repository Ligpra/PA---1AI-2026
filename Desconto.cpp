#include<stdio.H>
int main (){
	int vt, vd;
	scanf ("%d", &vt);
	if (vt > 1000)
	{
		vd = vt - (vt * 8 / 100);
		printf (" Desconto de 8%");
	}
	else
	{
		vd = vt - (vt * 4 / 100);
		printf (" Desconto de 4%");
	}
	printf (" Valor inicial=%d", vt);
	printf (" Valor final=%d", vd);
}
