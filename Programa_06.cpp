// Fa�a um algoritmo que pergunte para o usu�rio quanto ele ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float salario, total;
	
	printf("Sal�rio por hora: ");
	scanf("%f", &salario);
	printf("Horas trabalhadas no m�s: ");
	scanf("%d", &horas);
	
	total = salario * horas;
	
	printf("\nO sal�rio ganho por horas trabalhadas no m�s � de: R$%.2f", total);
	
	return 0;
}
