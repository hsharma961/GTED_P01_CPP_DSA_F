#include <iostream>
using namespace std;
int main()
{
	int num1, num2;

	cout << "Addition\n";
	cout << "1:    "; cin >> num1; 
	cout << "\n2:    "; cin >> num2; 
	cout << "\nsum:  " << num1 + num2 << "\n" << "\n";

	cout << "Multiply\n";
	cout << "1:    "; cin >> num1; cout << "\n";
	cout << "2:    "; cin >> num2; cout << "\n";
	cout << "sum:  " << num1 + num2;

	return 0;
}