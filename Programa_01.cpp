// Ler um número inteiro e imprima seu sucessor e seu antecessor.

#include<stdio.h> // Contém funções de entrada e saída padrão, como o scanf e o printf.
#include<locale> // Inclui a biblioteca de manipulação de configurações regionais.

int main(){ // Função principal, ponto de entrada do programa.
	setlocale(LC_ALL, "Portuguese"); // Configuração de localidade.
	
	int numero, sucessor, antecessor; // Declaração de variáveis.
	
	printf("Digite um número: "); // Exibe a mensagem solicitando um número.
	scanf("%d", &numero); // lê um número inteiro digitado pelo usuário e o armazena em número.
	
	sucessor = numero + 1; // Cálculo do sucessor.
	antecessor = numero - 1; // Cálculo do antecessor.
	
	printf("O sucessor do número %d é %d e o antecessor é %d.", numero, sucessor, antecessor); // Saída de dados.
	
	return 0; // Finalização do programa.
}
