// A loja Mam�o com A��car est� vendendo seus produtos em 5 presta��es sem juros.
// Fa�a um algoritmo que receba o valor de tr�s produtos e em seguida mostre o total da compra e o valor das presta��es.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v1, v2, v3, total, prestacoes;
	
	printf("Informe o valor do 1� produto: ");
	scanf("%f", &v1);
	printf("Informe o valor do 2� produto: ");
	scanf("%f", &v2);
	printf("Informe o valor do 3� produto: ");
	scanf("%f", &v3);
	
	total = v1 + v2 + v3;
	prestacoes = total / 5;
	
	printf("\nO valor total da compra � igual a: R$%.2f.\nO valor das presta��es � de: R$%.2f.", total, prestacoes);
	
	return 0;
}
