#include<iostream>
#include<iomanip>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float salario, total;
	
	std::cout << "Salário por hora: ";
	std::cin >> salario;
	std::cout << "Horas trabalhadas no mês: ";
	std::cin >> horas;
	
	total = salario * horas;
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl << "O salário ganho por horas trabalhadas no mês é de: R$" << total << ".";
	
	return 0;
}
