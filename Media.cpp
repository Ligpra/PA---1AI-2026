#include<stdio.h>
int main(){
	//calcular a media
	int n1, n2, n3, n4, r;
	printf("Digite quatro numeros: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	r = (n1 + n2 + n3 + n4) / 4;
	printf("Media = %d", r);
}
