#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

int main(int argc, char** argv){
		
	setlocale(LC_ALL, "Portuguese");

	string name;

	cout << "Digite seu nome: ";

	cin >> name;

	// "\n" / endl

	cout << "\nSeu nome é: " << name << "\n";
	
	return 0;
}
