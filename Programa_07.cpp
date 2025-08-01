// Tendo como dados de entrada a altura de uma pessoa, implemente um algoritmo que calcule e mostre o peso ideal, usando a seguinte f�rmula: (72.7*altura) - 58.
// OBS: O c�lculo do peso ideal � uma estimativa e n�o deve ser usado como um diagn�stico m�dico preciso.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, ideal;
	
	printf("Informe sua altura (em metros): ");
	scanf("%f", &altura);
	
	ideal = (72.7*altura) - 58;
	
	printf("\nO seu peso ideal � : %.2f", ideal);
	
	return 0;
}
