// Fa�a um algoritmo que receba do usu�rio uma quantidade de metros e em seguida fa�a a convers�o para cent�metros, exibindo o resultado.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float metros, centi;
	
	printf("Informe um valor (em metros): ");
	scanf("%f", &metros);
	
	centi = metros * 100;
	
	printf("\nO valor %.2f metros equivale a %.2f em cent�metros.", metros, centi);
	
	return 0;
}
