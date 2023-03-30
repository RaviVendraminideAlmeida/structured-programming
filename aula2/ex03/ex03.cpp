#include <iostream>

using namespace std;

int main(int argc, char** argv){
	float firstNumber, secondNumber, thirdNumber, sum, average;

	cout << "Type in the value of the 1st number: ";
	cin >> firstNumber;

	cout << "Type in the value of the 2nd number: ";
	cin >> secondNumber;

	cout << "Type in the value of the 3rd number: ";
	cin >> thirdNumber;
	
	sum = firstNumber + secondNumber + thirdNumber;

	cout << "\n The addition of the given numbers is: " << sum << endl;

	average = sum / 3;

	cout << "\n The average of the given numbers is: " << average << endl;

	return 0;
}
