#include <iostream>

int main(){
	bool v1, v2;

	std::cout << "Digite dois valores binários: ";
	std::cin >> v1 >> v2;

	std::cout << "A operação AND entre os valores é: " << (v1 && v2) << "\n";
	std::cout << "A operação OR entre os valores é: " << (v1 || v2) << "\n";
	std::cout << "A operação NOT do primeiro valor é: " << v1 << "\n";

	return 0;
}
