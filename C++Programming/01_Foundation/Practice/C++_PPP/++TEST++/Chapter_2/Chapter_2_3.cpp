#include <iostream>
#include <string>

int main()
{

	int mile;
	double KiMi = 1.60934;

	std::cout << "Enter the value to convert mile(s) into Kilometer(s).\n";
	std::cin >> mile;

	std::cout << "\nMile(s): " << mile << "\n"
			  << "Kilometer(s): " << mile * KiMi << "\n"
			  << "\n";

	system("pause");

	return 0;
}

/*Write a program in C++ that converts from miles to kilometers. Your
program should have a reasonable prompt for the user to enter a number
of miles. Hint: A mile is1.609 kilometers*/