#include <iostream>
#include <iomanip>


int main(int argc, char** argv)
{
	float fahrenheit, celsius;

	std::cout << "Informe o valor em fahrenheit: ";
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * (5.0/9.0);

	std::cout << "A conversão do valor de " << fahrenheit << "ºF para Celsius é de " << celsius  << "ºC" << "\n";
}
