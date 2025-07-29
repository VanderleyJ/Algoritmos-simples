// Ler dois números inteiros e imprimir o resultado da adição, subtração, multiplicação e divisão.
// Antes da exibição do resultado, deverá aparecer o texto: SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO, DIVISÃO.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, sub, multi, div;
	
	printf("Digite o 1° número: ");
	scanf("%f", &n1);
	printf("Digite o 2° número: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	printf("SOMA: %.2f\n", soma);
	printf("SUBTRAÇÃO: %.2f\n", sub);
	printf("MULTIPLICAÇÃO: %.2f\n", multi);
	printf("DIVISÃO: %.2f\n", div);
	
	return 0;
}
