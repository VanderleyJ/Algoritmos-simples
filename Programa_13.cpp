// Fa�a um Programa que leia dois n�meros e imprima o maior deles.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Informe o 1� n�mero: ");
	scanf("%d", &n1);
	printf("Informe o 2� n�mero: ");
	scanf("%d", &n2);
	if(n1>n2){
		printf("O n�mero %d � maior que o n�mero %d.", n1, n2);
	}else if(n2>n1){
		printf("O n�mero %d � maior que o n�mero %d.", n2, n1);
	}else{
		printf("Os dois n�meros informados s�o iguais.");
	}
	return 0;
}
