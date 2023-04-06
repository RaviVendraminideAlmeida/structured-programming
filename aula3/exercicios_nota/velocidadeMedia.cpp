#include <iostream>
#include <locale>
#include <iomanip>

int main(){

	setlocale(LC_ALL, "Portuguese");

	std::string name;
	float averageSpeed, minutes, km;
	
	std::cout << "Informe seu nome: ";
	std::cin >> name;

	std::cout << "Informe a quantidade de quilômetros percorridos: ";
	std::cin >> km;

	std::cout << "Informe o tempo em minutos que demorou para percorrer " << km << " quilômetros: ";
	std::cin >> minutes;


	averageSpeed  = km  / (minutes / 60);

	std::cout << "\nOlá " << name << " você percorreu " << km << " quilômetros em " << minutes << " minutos e sua velocidade média foi: " << std::setprecision(4) << averageSpeed << "\n";

	return 0;
}
