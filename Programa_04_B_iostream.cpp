#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	std::cout << "Digite um número de 1 à 7: ";
	std::cin >> valor;
	
	switch(valor){
		case 1:
			std::cout << "Domingo!";
		break;
		case 2:
			std::cout << "Segunda-feira!";
		break;
		case 3:
			std::cout << "Terça-feira!";
		break;
		case 4:
			std::cout << "Quarta-feira!";
		break;
		case 5:
			std::cout << "Quinta-feira!";
		break;
		case 6:
			std::cout << "Sexta-feira!";
		break;
		case 7:
			std::cout << "Sábado!";
		break;
		default:
			std::cout << "Valor inválido!";
	}
	
	return 0;
}
