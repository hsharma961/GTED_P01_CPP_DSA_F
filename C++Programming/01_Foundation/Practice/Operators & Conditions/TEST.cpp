#include <iostream>
using namespace std;

int main(){

int cups;

double cupPrice = 16,
totalPrice = cups*cupPrice,
dis_10Percent= totalPrice - (totalPrice*10/100),
dis_20Percent= totalPrice - (totalPrice*20/100);

cout<<"//less then 10 cups NO discount\n"
	<<"//10-20 cups 10% discount\n"
	<<"//more then 20 = 20% discount\n\n";

cout<<"Enter number of cups you want\n";

cin>> cups;

if (cups < 10){
	cout<<"You bought "<< cups <<" cups, with NO DISCOUNT\n";		
	cout<<"Your bill is "<< totalPrice <<"\n";
} else if (cups >= 10 && cups <= 20){
		cout<< " You bought "<< cups <<" cups, with 10% DISCOUNT\n";
		cout<< " Your bill is "<< dis_10Percent <<"\n";	
} else if (cups > 20){
		cout<< " You bought "<< cups <<" cups, with 20% DISCOUNT\n";
		cout<< " Your bill is "<< dis_20Percent <<"\n";
}else{
	cout<<"NO DISCOUNT!\n";
}
		// if (cups >= 10 && cups <= 20){
		// 		cout<< " You bought "<< cups <<" cups, with 10% DISCOUNT\n";
		// 		cout<< " Your bill is "<< totalPrice - (totalPrice*10/100) <<"\n";
		// } else if (cups > 20){
		// 		cout<< " You bought "<< cups <<" cups, with 20% DISCOUNT\n";
		// 		cout<< " Your bill is "<< totalPrice - (totalPrice*20/100) <<"\n";
		// }else{
		// 	cout<<"NO DISCOUNT!\n";
		// }

	system ("pause");
	return 0;
}

//(cups*cupsprice)-(cups*cupsPrice*10/100)