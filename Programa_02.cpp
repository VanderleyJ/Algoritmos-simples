// Ler dois n�meros inteiros e imprimir o resultado da adi��o, subtra��o, multiplica��o e divis�o.
// Antes da exibi��o do resultado, dever� aparecer o texto: SOMA, SUBTRA��O, MULTIPLICA��O, DIVIS�O.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, sub, multi, div;
	
	printf("Digite o 1� n�mero: ");
	scanf("%f", &n1);
	printf("Digite o 2� n�mero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	printf("SOMA: %.2f\n", soma);
	printf("SUBTRA��O: %.2f\n", sub);
	printf("MULTIPLICA��O: %.2f\n", multi);
	printf("DIVIS�O: %.2f\n", div);
	
	return 0;
}
