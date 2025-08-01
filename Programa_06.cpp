// Faça um algoritmo que pergunte para o usuário quanto ele ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float salario, total;
	
	printf("Salário por hora: ");
	scanf("%f", &salario);
	printf("Horas trabalhadas no mês: ");
	scanf("%d", &horas);
	
	total = salario * horas;
	
	printf("\nO salário ganho por horas trabalhadas no mês é de: R$%.2f", total);
	
	return 0;
}
