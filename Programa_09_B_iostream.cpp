#include<iostream>
#include<iomanip>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	std::cout << "Informe seu peso (Kg): ";
	std::cin >> peso;
	std::cout << "Informe sua altura (em metros): ";
	std::cin >> altura;
	
	imc = peso / (altura * altura);
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl << "Seu Índice de Massa Corpórea é de: " << imc << ".";
	
	return 0;
}
