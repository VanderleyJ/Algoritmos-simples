#include<iostream>
#include<iomanip>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float salario, total;
	
	std::cout << "Sal�rio por hora: ";
	std::cin >> salario;
	std::cout << "Horas trabalhadas no m�s: ";
	std::cin >> horas;
	
	total = salario * horas;
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl << "O sal�rio ganho por horas trabalhadas no m�s � de: R$" << total << ".";
	
	return 0;
}
