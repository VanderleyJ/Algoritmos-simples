#include<iostream>
#include<iomanip>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorC, valorD, valorF;
	std::cout<<"Informe o valor total da compra: R$";
	std::cin>>valorC;
	valorD=valorC*0.25;
	valorF=valorC-valorD;
	std::cout<<std::endl<<"O valor total da compra foi de: R$"<<valorC<<".";
	std::cout<<std::endl<<"O valor do desconto é de 25%.";
	std::cout<<std::fixed<<std::setprecision(2);
	std::cout<<std::endl<<"O valor final a ser pago é de: R$"<<valorF<<".";
	return 0;
}
