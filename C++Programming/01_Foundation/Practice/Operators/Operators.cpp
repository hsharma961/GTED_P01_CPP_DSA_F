#include <iostream>

int main()
{
	int n = 3;
	std::cout << "lets say n=3, so now lets say\n"
		<< "\nn added by		2	=	" << 2 + n
		<< "\nn substracted by	5	=	" << 5 - n
		<< "\nn multyply by		4	=	" << 4 * n
		<< "\nn divided by		10	=	" << 10 / n
		<< "\n remainder of		n	=	" << n%30
		<< "\n square root  of	n	=	" << sqrt(n)
		<< "\n";
	return 0;
}