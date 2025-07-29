// Ler dois números inteiros e imprimir o resultado da adição, subtração, multiplicação e divisão.
// Antes da exibição do resultado, deverá aparecer o texto: SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO, DIVISÃO.

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, sub, multi, div;
	
	std::cout << "Digite o 1° número: ";
	std::cin >> n1;
	std::cout << "Digite o 2° número: ";
	std::cin >> n2;
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	std::cout << "SOMA: " << soma << std::endl;
	std::cout << "SUBTRAÇÃO: " << sub << std::endl;
	std::cout << "MULTIPLICAÇÃO: " << multi << std::endl;
	std::cout << "DIVISÃO: " << div << std::endl;
	
	return 0;
}
