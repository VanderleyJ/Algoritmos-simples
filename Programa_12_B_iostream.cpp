#include<iostream>
#include<iomanip>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float custoF, porD, imposto, custoFF;
	std::cout<<"Informe o custo de f�brica do carro: R$";
	std::cin>>custoF;
	porD=custoF*0.28;
	imposto=custoF*0.45;
	custoFF=custoF+porD+imposto;
	std::cout<<std::fixed<<std::setprecision(2);
	std::cout<<std::endl<<"A percentagem da distribuidora � de 28%. Valor acrescentado: R$"<<porD<<"."<<std::endl<<"A percentagem dos impostos � de 45%. Valor acrescentado: R$"<<imposto<<"."<<std::endl<<"Custo final do ve�culo: R$"<<custoFF<<".";
	return 0;
}
