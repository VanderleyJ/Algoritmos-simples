// Ler um n�mero inteiro e imprima seu sucessor e seu antecessor.

#include<stdio.h> // Cont�m fun��es de entrada e sa�da padr�o, como o scanf e o printf.
#include<locale> // Inclui a biblioteca de manipula��o de configura��es regionais.

int main(){ // Fun��o principal, ponto de entrada do programa.
	setlocale(LC_ALL, "Portuguese"); // Configura��o de localidade.
	
	int numero, sucessor, antecessor; // Declara��o de vari�veis.
	
	printf("Digite um n�mero: "); // Exibe a mensagem solicitando um n�mero.
	scanf("%d", &numero); // l� um n�mero inteiro digitado pelo usu�rio e o armazena em n�mero.
	
	sucessor = numero + 1; // C�lculo do sucessor.
	antecessor = numero - 1; // C�lculo do antecessor.
	
	printf("O sucessor do n�mero %d � %d e o antecessor � %d.", numero, sucessor, antecessor); // Sa�da de dados.
	
	return 0; // Finaliza��o do programa.
}
