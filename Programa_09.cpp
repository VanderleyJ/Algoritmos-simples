// Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o IMC – Índice de Massa Corpórea, que mede a relação entre peso e altura.
// A fórmula do IMC é: peso em Kg dividido pelo quadrado da altura.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Informe seu peso (Kg): ");
	scanf("%f", &peso);
	printf("Informe sua altura (em metros): ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Seu Índice de Massa Corpórea é de: %.2f.", imc);
	
	return 0;
}
