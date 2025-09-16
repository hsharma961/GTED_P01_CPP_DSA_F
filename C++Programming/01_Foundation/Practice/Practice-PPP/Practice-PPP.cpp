#include <iostream>
#include <string>

int main() // read name and age
{ 
	double age ;
	std::string first_name = "Sharma";
	std::string last_name = "Kumar";
	std::cout << "Please enter your full (name & surname) and age (in months)\n";
	std::cin >> first_name >> last_name >> age;
	std::cout << "You know nothing " << first_name <<" " << last_name <<" (age " << age/12 << " months)\n";
	return 0;
}