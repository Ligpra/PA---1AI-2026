#include<stdio.h>
/*
Sintaxe de uma função:
tipo_retorno nome_funcao(parâmetros)
{
	corpo_funcao;
	return valor;
}

*/             //         10           45
float somar_numeros(float num1, float num2) // <--- Assinatura | num1 e num2 são parâmetros
{
	float s;
	s = num1 + num2; // 10 + 45 -> s = 55
	return s; // 55
}

// Programa principal
int main()
{
	float n1, n2, soma;
	
	printf("Digite 2 numeros:");
	scanf("%f", &n1); // n1 -> 10
	scanf("%f", &n2); // n2 -> 45
	
	soma = somar_numeros(n1, n2); // n1 -> 10 e n2 -> 45 são argumentos
	printf("Soma = %f", soma);
	
	soma = somar_numeros(88, 17); // n1 -> 10 e n2 -> 45 são argumentos
	printf("Soma = %f", soma);
	
	printf("Soma = %f", somar_numeros(22, 44));
	

}