#include<iostream>
#include<iomanip>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float dolar, cotdolar, reais;
	std::cout<<"Informe a quantia em dólar: ";
	std::cin>>dolar;
	std::cout<<"Informe a cotação do dólar atualmente: ";
	std::cin>>cotdolar;
	reais=dolar/cotdolar;
	std::cout<<std::fixed<<std::setprecision(2);
	std::cout<<"Quantia em reais: R$"<<reais<<".";
	return 0;
}
