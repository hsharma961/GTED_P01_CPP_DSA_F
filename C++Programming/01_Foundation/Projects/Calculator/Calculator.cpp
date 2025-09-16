#include <iostream>
#include <string>

int main()
{
	int age;
	std::string name, surname;
	std::cout << "Your details please: Name and age\n";
	std::cin >> name >> surname >> age;
	std::cout << "My name is " <<name << " " <<surname <<" I am " << age <<" years old";
	return 0;
}