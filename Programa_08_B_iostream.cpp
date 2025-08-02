#include<iostream>
#include<iomanip>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v1, v2, v3, total, prestacoes;
	
	std::cout << "Informe o valor do 1° produto: ";
	std::cin >> v1;
	std::cout << "Informe o valor do 2° produto: ";
	std::cin >> v2;
	std::cout << "Informe o valor do 3° produto: ";
	std::cin >> v3;
	
	total = v1 + v2 + v3;
	prestacoes = total / 5;
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl << "O valor total da compra é de: R$" << total << "." << std::endl << "O valor das prestações é de: R$" << prestacoes << ".";
	
	return 0;
}
