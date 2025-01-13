#include <stdio.h>

int main(void){
	int a, b, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &a);
	printf("digite o segundo valor:\n");
	scanf("%d", &b);
	
	soma = a+b;
	subtr = a-b;
	mult = a*b;
	divis = a/b;
	
	printf("resultado:\n");
	printf("soma: %d\n", soma);
	printf("subtracao: %d\n", subtr);
	printf("multiplicacao: %d\n", mult);
	printf("divisao: %d\n", divis);
}
