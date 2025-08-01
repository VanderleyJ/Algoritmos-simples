#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float metros, centi;
	
	std::cout << "Informe um valor (em metros): ";
	std::cin >> metros;
	
	centi = metros * 100;
	
	std::cout << std::endl << "O valor " << metros << " metros equivale a " << centi << " centímetros.";
	
	return 0;
}
