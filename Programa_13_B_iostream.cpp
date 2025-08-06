#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	std::cout<<"Informe o 1° número: ";
	std::cin>>n1;
	std::cout<<"Informe o 2° número: ";
	std::cin>>n2;
	if(n1>n2){
		std::cout<<"O número "<<n1<<" é maior que o número "<<n2<<".";
	}else if(n2>n1){
		std::cout<<"O número "<<n2<<" é maior que o número "<<n1<<".";
	}else{
		std::cout<<"Os dois números informados são iguais.";
	}
	return 0;
}
