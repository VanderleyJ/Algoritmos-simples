#include<iostream>
#include<iomanip>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, ideal;
	
	std::cout << "Informe sua altura (em metros): ";
	std::cin >> altura;
	
	ideal = (72.7 * altura) - 58;
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl << "Seu peso ideal é: " << ideal;
	
	return 0;
}
