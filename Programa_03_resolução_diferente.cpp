// Leia 4 notas de um aluno e imprima a média aritmética.

#include<iostream>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	
	std::cout << "Digite a 1° nota: ";
	std::cin >> n1;
	std::cout << "Digite a 2° nota: ";
	std::cin >> n2;
	std::cout << "Digite a 3° nota: ";
	std::cin >> n3;
	std::cout << "Digite a 4° nota: ";
	std::cin >> n4;
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	std::cout << "A média das notas adquiridas é: " << media;
	
	return 0;
}
