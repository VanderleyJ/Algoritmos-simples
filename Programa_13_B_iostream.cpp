#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	std::cout<<"Informe o 1� n�mero: ";
	std::cin>>n1;
	std::cout<<"Informe o 2� n�mero: ";
	std::cin>>n2;
	if(n1>n2){
		std::cout<<"O n�mero "<<n1<<" � maior que o n�mero "<<n2<<".";
	}else if(n2>n1){
		std::cout<<"O n�mero "<<n2<<" � maior que o n�mero "<<n1<<".";
	}else{
		std::cout<<"Os dois n�meros informados s�o iguais.";
	}
	return 0;
}
