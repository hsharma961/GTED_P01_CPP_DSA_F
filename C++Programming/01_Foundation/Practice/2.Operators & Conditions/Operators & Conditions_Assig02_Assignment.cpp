//SALE Purchase more then 20 TeaBags & get 10 EXTRA

#include <iostream>

int main(){

int teaBags_Count;

	std::cout<<"**********WELCOME TO TEA SHOP**********\n\n";
	std::cout<<"We are currently having a SALE on Tea Bags\n";
	std::cout<<"Purchase 20 or more Tea Bags & get 10 EXTRA Bags FREE\n\n";
	std::cout<<"How many bags are you Purchasing sir?\n\n";

	std::cin>> teaBags_Count;
	
			if(teaBags_Count < 20){
				std::cout << "Your total bags are " << teaBags_Count << "\n"
						<< "Purchase " << 20-teaBags_Count << " more get benefites of SALE\n";
			}

			else if (teaBags_Count >= 20){
			   teaBags_Count += 10;
		   
			   std::cout <<"Your total bags are " << teaBags_Count <<"\n";
			   std::cout <<"Congratulations! You have received 10 EXTRA Bags FREE\n";
			}

			else{
				std::cout <<"SORRY, Please purchase more to get benefites\n";
			}

	system ("pause");
	return 0;
}