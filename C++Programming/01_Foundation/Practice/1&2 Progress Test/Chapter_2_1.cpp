/*[1] Write a program that produces a simple form letter based on user
input. Begin by typing the code prompting a user to enter
his or her first name and writing “Hello, first_name” where first_name
is the name entered by the user.*/


#include <iostream>
#include <string>

int main(){

	std::string first_name;

		std::cout << "Enter your first name here: ";
		
		std::cin >> first_name;
		
		std::cout <<"\n\nDear " << first_name <<",\n\n";
 
	return 0;
}

/*Then modify your code as follows:
change the prompt to “Enter the name of the person you want to write
to” and change the output to “Dear first_name,”. Don’t forget the
comma.


#include <iostream>
#include <string>

int main(){

	std::string first_name;

		std::cout << "Enter your first name here: ";
		
		std::cin >> first_name;
		
		std::cout <<"\n\nHello " << first_name\n\n;
 
	return 0;
}
*/


