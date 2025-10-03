#include <iostream>
#include <string>

int main (){

	double operand1, operand2;
	std::string operation;

		std::cout <<"input 2 values for calculation\n"
				  << "Using operators like \n"
				  << "+, -, /, *, and\"plus\", \"minus\", \"mul\", and \"div\"\n"
				  <<"(e.g:- + operand1 and operand2)\n"
				  << "\n"
				  <<"Numbers:- ";
		std::cin >> operation >> operand1 >> operand2;
		std::cout << "\n";
		if (operation == "+" || operation == "plus"){
				std::cout << "Result = " << operand1 + operand2 <<"\n";
			} else if (operation == "-" || operation == "minus"){
				std::cout << "Result = " << operand1 - operand2 <<"\n";
			} else if (operation == "*" || operation == "mul"){
				std::cout << "Result = " << operand1 * operand2 <<"\n";
			} else if (operation == "/" || operation == "div"){
				std::cout << "Result = " << operand1 / operand2 <<"\n";
		}else{
			std::cout << "check input again\n"
					  << "\n";
		}
			
	system ("pause");
	return 0;
}

/*Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
* 45
Read the operation into a string called operation and use an if-statement
to figure out which operation the user wants, for example, if
(operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, −, *, /, plus, minus, mul, and div
with their obvious meanings.*/