//buy cups more then 12 or be a member more then 2 years 
// you will get discount

#include <iostream>

int main(){

 int cups;
 bool member;
 
		std::cout <<"*********WELCOME BACK**************\n\n"
			  <<"Be a memeber and Get the discount on purcheses\n"
			  <<"\t\tT&C Applied\n\n\n"
			  <<"How much cups you want?\n"
			  <<"or please tell us if you are memberahip for 2 years (true/false)\n";
		std::cin >> cups >> member;
	
			 	if(cups >= 12 || member){
	
				std::cout <<" CONGRATULATIONS \n"
						  <<" You got a big discount of 30% \n";
			}
			else {	
				std::cout <<" Sorry you are not elegible for discount\n"
						  <<"Come Tomorrow (WITH MONEY)\n";
			}
	
	system ("pause");
	return 0;
}