#include <iostream>
#include <string>
#include <iomanip>

int main(){

	int age;
	std::string first_name, last_name, friend_name, response;
		
		std::cout << "Enter the name (first and last name)of the person you want to write to:\n";
		
		std::cin >> first_name >> last_name;
		
		std::cout <<"\n	Hi " << first_name << " " << last_name <<",\n"
				  <<"How are you? I am fine,\n"
				  <<"What was name of that friend of yours by the way?\n";
				 
		std::cin >> friend_name;
		
		std::cout <<"\nHave you seen " << friend_name << " lately? \n";
		
		std::cin >> response;
		
			if(response=="yes" || response=="Yes"){
				std::cout << "\nGreat! Please give my regards to " << friend_name << ".\n";
				}
			else if(response=="no" || response=="No"){
				std::cout << "\nYou should meet " << friend_name << " sometime.\n";
				}
			else{
				std::cout << "\nI didn't get you.\n";
				}
		
		std::cout <<"\nI hear you just had a birthday and how old are you?\n";
		
		std::cin >> age;
		
			if(age<=0 || age > 110){
					std::cout << "\nAre you kidding me?\n";
					}
				else if(age < 17){
					std::cout << "\nNext year you will be "<< age+1 <<"\n";
					}
				else if(age==17){
					std::cout << "\nNext year you will be able to vote.";
					}
				else if(age>59){
					std::cout << "\nAre you retired?\n";
					}
				else if (age>17||age<=59){
					std::cout << "\nI hope you are enjoying your work."
							  << "See you at o
							  \ffice tomorrow.\n";
					}
					
					/*  Instead of using multiple \t for alignment, 
					we used iomanip library for better formatting
					and setw() manipulator for setting the width
					of the output field.  */
					
			std::cout << std::setw(40) << "Your Sincere,\n"
					  << std::setw(40) << "___________\n"
					  << std::setw(40) << "Hitesh Sharma\n";
	system("pause");
 
	return 0;
}