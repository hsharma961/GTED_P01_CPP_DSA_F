#include <iostream>

int main(){

 int penny, nickel, dime, quarter, half_dollar, doller;

		std::cout << "How many pennies do you have?\n\n";
		std::cin >> penny;
		
		// conversion
		doller = 1;
		half_dollar = doller /2;
		quarter = doller / 4;
		dime = doller / 10;
		nickel = doller / 20;
		penny = doller/100;
		
		

		
		

			// singular and plural condition
			//  if (penny == 1 && nickel == 1 && dime == 1 && quarter == 1 && half_dollar == 1 && doller == 1){					
					std::cout <<" You have " << penny << " penny" <<"\n"
							  <<" You have " << nickel << " nickel" <<"\n"
							  <<" You have " << dime << " dime" <<"\n"
							  <<" You have " << quarter << " quarter" <<"\n"
							  <<" You have " << half_dollar << " half dollar" <<"\n"
							  <<" You have " << doller << " dollar" <<"\n";
			// }  else {
			// 		std::cout <<" You have " << penny << "pennies" <<"\n"
			// 				  <<" You have " << nickel << "nickels" <<"\n"
			// 				  <<" You have " << dime << "dimes" <<"\n"
			// 				  <<" You have " << quarter << "quarters" <<"\n"
			// 				  <<" You have " << half_dollar << "half dollars" <<"\n"
			// 				  <<" You have " << doller << "dollars" <<"\n";
			//  }

	system("pause");
	return 0;
}
/*1 half dollar = 2 quarters
1 half dollar = 5 dimes
1 half dollar = 10 nickels
1 half dollar = 50 pennies

1 quarter = 2.5 dimes (or 2 dimes and 1 nickel)
1 quarter = 5 nickels
1 quarter = 25 pennies

1 dime = 2 nickels
1 dime = 10 cents

1 nickel = 5 cents

1 cent = 1 penny*/
