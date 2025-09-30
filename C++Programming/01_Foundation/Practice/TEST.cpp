#include <iostream>
using namespace std;

int main(){

int cups;
double cupPrice = 15, totalPrice, discount;

cout<<"//less then 10 cups NO discount\n"
	<<"//10-20 cups 10% discount\n"
	<<"//more then 20 = 20% discount\n\n"
	<< "Enter number of cups you want\n";

	cin >> cups; //2
	totalPrice = cups * cupPrice;
	
		if (cups > 20){
			discount = 0.20;
		} else if (cups >= 10 && cups <= 20){
			discount = 0.10;
		} else {
			discount = 0;
		}
		totalPrice -= (totalPrice*discount);
	cout << " Your bill is "<< totalPrice <<"\n";

	system ("pause");
	return 0;
}

//(cups*cupsprice)-(cups*cupsPrice*10/100)