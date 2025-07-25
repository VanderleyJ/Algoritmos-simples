// Ler um número inteiro e imprima seu sucessor e antecessor.

#include<iostream>
#include<locale>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	std::cout << "Digite um número: ";
	std::cin >> numero;
	
	int sucessor = numero + 1;
	int antecessor = numero - 1;
	
	std::cout << "O sucessor de " << numero << " é " << sucessor << " e o antecessor é " << antecessor << "." << std::endl;
	
	return 0;
}
