// Faça um algoritmo que calcule o valor em reais correspondente aos de dólares.
// O programa deve solicitar a quantidade de dólares e a cotação do dólar no dia, em seguida deve mostrar o valor total em reais.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float dolar, cotdolar, reais;
	printf("Informe a quantia em dólar: ");
	scanf("%f", &dolar);
	printf("Informe a cotação do dólar atualmente: ");
	scanf("%f", &cotdolar);
	reais=dolar/cotdolar;
	printf("Quantia em reais: R$%.2f.", reais);
	return 0;
}
