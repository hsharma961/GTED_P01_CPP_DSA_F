/*Write a program that prompts the user to enter three integer values, and
then outputs the values in NUMERICAL sequence separated by commas.*/
#include <iostream>
using namespace std;

int main(){

	double val1, val2, val3;
		cout << "Input 3 Values for in any order to get in NUMERICAL sequence\n";
		cin >> val1 >> val2 >> val3;

			if(val1 < val2 && val2 < val3){
                cout << val1 << ", " << val2 << ", " << val3 <<"\n";}
            else if(val1 < val3 && val3 < val2){
                cout << val1 << ", " << val3 << ", " << val2 <<"\n";}

			else if(val2 < val1 && val1 < val3){
                cout << val2 << ", " << val1 << ", " << val3 <<"\n";}
			else if(val2 < val3 && val3 < val1){
                cout << val2 << ", " << val3 << ", " << val1 <<"\n";}

			else if(val3 < val1 && val1 < val2){
                cout << val3 << ", " << val1 << ", " << val2 <<"\n";}
			else if(val3 < val2 && val2 < val1){
                cout << val3 << ", " << val2 << ", " << val1 <<"\n";}

			else{
				cout<< "please check input once\n";
			}
	
			  
	system ("pause");
	return 0;

}

*/

/*Do above exercise, 

BUT 

with three string values. So, if the user enters the
values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald,
Hemingway, Steinbeck.*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    //add a library for string
    // just change double to string, rest of the code is same
    // int val1, val2, val3;
	string val1, val2, val3;
		cout << "Input 3 Values for in any order to get in NUMERICAL sequence\n\n";
		cin >> val1 >> val2 >> val3;

			if(val1 < val2 && val2 < val3){
                cout << val1 << ", " << val2 << ", " << val3 <<"\n";}
            else if(val1 < val3 && val3 < val2){
                cout << val1 << ", " << val3 << ", " << val2 <<"\n";}

			else if(val2 < val1 && val1 < val3){
                cout << val2 << ", " << val1 << ", " << val3 <<"\n";}
			else if(val2 < val3 && val3 < val1){
                cout << val2 << ", " << val3 << ", " << val1 <<"\n";}

			else if(val3 < val1 && val1 < val2){
                cout << val3 << ", " << val1 << ", " << val2 <<"\n";}
			else if(val3 < val2 && val2 < val1){
                cout << val3 << ", " << val2 << ", " << val1 <<"\n";}

			else{
				cout<< "please check input once\n";
			}
	
			  
	system ("pause");
	return 0;

}