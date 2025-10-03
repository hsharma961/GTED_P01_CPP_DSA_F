#include <iostream>
using namespace std;

int main(){

	double val1;
	double val2;

		cout <<"put 2 integer values for input to make sums\n";
		cin >> val1 >> val2;

		cout << "smaller " << (val1<val2? val1:val2) << "\n"  
			  << "larger " << (val1>val2? val1:val2) << "\n"
			  << "condition val1==val2 " << (val1==val2? val1:val2) << "\n"
			  << "condition val1==val2 " << (val1==val2? val2:val1) << "\n"
			  << "condition val2==val1 " << (val2==val1? val1:val2) << "\n"
			  << "condition val2==val1 " << (val2==val1? val2:val1) << "\n"
			  << "difference " << val1-val2 << "\n"
			  << "product " << val1*val2 << "\n"
			  << "ratio " << val1/val2 << "\n";
			  
	system ("pause");
	return 0;

}

/*Write a program that prompts the user to enter two integer values. Store
these values in int variables named val1 and val2. Write your program to
determine the smaller, larger, sum, difference, product, and ratio of
these values and report them to the user.*/
