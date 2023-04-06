#include <iostream>
#include <locale>


int main(int argc, char** argv){

	setlocale(LC_ALL, "Portuguese");

	std::string name;
	float n1,n2,n3, average;

	std::cout << "Digite seu nome: ";
	std::cin >> name;

	std::cout << "Digite a primeira nota: ";
	std::cin >> n1;

	std::cout << "Digite a seguna nota: ";
	std::cin  >> n2;

	std::cout << "Digite a terceira nota: ";
	std::cin >> n3;

	average = (n1 + n2 + n3) / 3;

	std::cout << "Aluno " << name << " possui média " << average;	

}
