// Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o IMC � �ndice de Massa Corp�rea, que mede a rela��o entre peso e altura.
// A f�rmula do IMC �: peso em Kg dividido pelo quadrado da altura.

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
	
	printf("Seu �ndice de Massa Corp�rea � de: %.2f.", imc);
	
	return 0;
}
