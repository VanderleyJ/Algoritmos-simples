// Ler um n�mero inteiro e imprima seu sucessor e antecessor.

#include<iostream>
#include<locale>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	std::cout << "Digite um n�mero: ";
	std::cin >> numero;
	
	int sucessor = numero + 1;
	int antecessor = numero - 1;
	
	std::cout << "O sucessor de " << numero << " � " << sucessor << " e o antecessor � " << antecessor << "." << std::endl;
	
	return 0;
}
