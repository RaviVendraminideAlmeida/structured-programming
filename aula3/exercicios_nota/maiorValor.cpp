#include <iostream>
#include <locale>

int main(int argc, char** argv){

	setlocale(LC_ALL, "Portuguese");

	float firstNumber, secondNumber;

	std::cout << "Digite o valor do primeiro número: ";
	std::cin >> firstNumber;

	std::cout << "Digite o valor do segundo número: ";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber){
		std::cout << "O maior valor é: " <<  firstNumber << "\n";
	} else if (secondNumber > firstNumber) {
		std::cout << "O maior valor é: " << secondNumber << "\n";
	} else {
		std::cout << "Os valores são iguais \n";
	}
	
	return 0;
}
