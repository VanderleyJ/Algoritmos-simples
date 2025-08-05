// Uma loja de informática está com uma promoção de Dia dos Pais, oferecendo um desconto de 25% em todos os produtos.
// Implemente um algoritmo que receba o valor total da compra e mostre como saída: o valor da compra, o valor do desconto e o valor final a ser pago.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorC, valorD, valorF;
	printf("Informe o valor total da compra: R$");
	scanf("%f", &valorC);
	valorD=0.25;
	valorF=valorC-(valorC*valorD);
	printf("\nO valor da compra foi: R$%.2f.\nO valor do desconto é de 25 porcento.\nO valor final a ser pago é de: R$%.2f.", valorC, valorF);
	return 0;
}
