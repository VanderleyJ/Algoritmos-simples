// O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
// Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de f�brica de um carro e
// escreva o custo ao consumidor.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float custoF, porD, imposto, custoFF;
	printf("Informe o custo de f�brica do carro: R$");
	scanf("%f", &custoF);
	porD=custoF*0.28;
	imposto=custoF*0.45;
	custoFF=custoF+porD+imposto;
	printf("\nPercentagem do distribuidor � de 28 porcento. Valor acrescentado: R$%.2f.", porD);
	printf("\nPercentagem dos impostos � de 45 porcento. Valor acrescentado: R$%.2f.", imposto);
	printf("\nCusto final do carro: R$%.2f.", custoFF);
	return 0;
}
