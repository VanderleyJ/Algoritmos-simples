// Fa�a um algoritmo que calcule o valor em reais correspondente aos de d�lares.
// O programa deve solicitar a quantidade de d�lares e a cota��o do d�lar no dia, em seguida deve mostrar o valor total em reais.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float dolar, cotdolar, reais;
	printf("Informe a quantia em d�lar: ");
	scanf("%f", &dolar);
	printf("Informe a cota��o do d�lar atualmente: ");
	scanf("%f", &cotdolar);
	reais=dolar/cotdolar;
	printf("Quantia em reais: R$%.2f.", reais);
	return 0;
}
