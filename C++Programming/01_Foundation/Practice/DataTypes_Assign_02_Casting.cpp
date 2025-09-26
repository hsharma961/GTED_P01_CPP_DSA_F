#include <iostream>

int main() {
	
     long double userPrice;
   
	std::cout <<"How much tea you wish to buy sir?\n";
	std::cin  >> userPrice;
	std::cout << "\nYour total bill is Rs." << userPrice * 10/100 + userPrice
              << "\nthank you for visiting us, please come again!\n";
	
    system("pause");
    return 0;

}