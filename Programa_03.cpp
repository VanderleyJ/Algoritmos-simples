// Leia 4 notas de um aluno e imprima a m�dia aritm�tica.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	
	printf("Digite a 1� nota: ");
	scanf("%f", &n1);
	printf("Digite a 2� nota: ");
	scanf("%f", &n2);
	printf("Digite a 3� nota: ");
	scanf("%f", &n3);
	printf("Digite a 4� nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("A m�dia das notas adquiridas �: %.2f", media);
	
	return 0;
}
