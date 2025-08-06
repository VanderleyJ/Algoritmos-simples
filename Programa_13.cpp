// Faça um Programa que leia dois números e imprima o maior deles.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Informe o 1° número: ");
	scanf("%d", &n1);
	printf("Informe o 2° número: ");
	scanf("%d", &n2);
	if(n1>n2){
		printf("O número %d é maior que o número %d.", n1, n2);
	}else if(n2>n1){
		printf("O número %d é maior que o número %d.", n2, n1);
	}else{
		printf("Os dois números informados são iguais.");
	}
	return 0;
}
