#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	// Variable for calculator

	char aritmatika;
	double num1;
	double num2;
	double result;

	// Bagian untuk menyambut klien
	// Part of which is for welcoming client

	cout << "Welcome to Calculator Program.\n";
	cout << "Enter any number on 1 and 2 part.\n\n";


	// Bagian input & output
	// Part of input & ouput

	cout << "Number 1: ";
	cin >> num1;

	cout << "Input any of these operators (+,-,*,/): ";
	cin >> aritmatika;

	cout << "Number 2: ";
	cin >> num2;

	// Kode-kode kalkulator
	// Codes of calculator

	if (aritmatika == '+')
	{
		result = num1 + num2;
		cout << "The result is " << result << ".";
	}
	 else if (aritmatika)
	{
		result = num1 - num2;
		cout << "The result is " << result << ".";
	}
	 else if (aritmatika)
	{
		result = num1 * num2;
		cout << "The result is " << result << ".";
	}
	 else if (aritmatika)
	{
		result = num1 / num2;
		cout << "The result is " << result << ".";
	}

		cout << "\n****************************************************************"<<endl;

	cin.get();
	return 0;
}