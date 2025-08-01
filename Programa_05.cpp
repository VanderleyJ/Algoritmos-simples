// Faça um algoritmo que receba do usuário uma quantidade de metros e em seguida faça a conversão para centímetros, exibindo o resultado.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float metros, centi;
	
	printf("Informe um valor (em metros): ");
	scanf("%f", &metros);
	
	centi = metros * 100;
	
	printf("\nO valor %.2f metros equivale a %.2f em centímetros.", metros, centi);
	
	return 0;
}
