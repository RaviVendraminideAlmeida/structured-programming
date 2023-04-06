#include <iostream>
#include <locale>

int main(int argc, char** argv){
	setlocale(LC_ALL, "Portuguese");

	float n1, n2, n3;

	std::cout << "Informe o valor do primeiro número: ";
	std::cin >> n1;

	std::cout << "Informe o valor do segundo número: ";
	std::cin >> n2;

	std::cout << "Informe o valor do terceiro número: ";
	std::cin >> n3;

	if(n1 > n2 && n1 > n3){
		std::cout << "O maior valor é: " << n1 << "\n";
	} else if(n2 > n1 && n2 > n3){
		std::cout << "O maior valor é: " << n2 << "\n";	
	} else if(n3 > n1 && n3 > n2){
		std::cout << "O maior valor é: " << n3 << "\n";	
	} else {
		std::cout << "Todos os valores são iguais" << "\n";
	}
	
	return 0;
}
