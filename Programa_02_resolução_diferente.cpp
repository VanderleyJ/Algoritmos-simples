// Ler dois n�meros inteiros e imprimir o resultado da adi��o, subtra��o, multiplica��o e divis�o.
// Antes da exibi��o do resultado, dever� aparecer o texto: SOMA, SUBTRA��O, MULTIPLICA��O, DIVIS�O.

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, sub, multi, div;
	
	std::cout << "Digite o 1� n�mero: ";
	std::cin >> n1;
	std::cout << "Digite o 2� n�mero: ";
	std::cin >> n2;
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	std::cout << "SOMA: " << soma << std::endl;
	std::cout << "SUBTRA��O: " << sub << std::endl;
	std::cout << "MULTIPLICA��O: " << multi << std::endl;
	std::cout << "DIVIS�O: " << div << std::endl;
	
	return 0;
}
