#include <iostream>

int main() 
{
    float pureTea = 22.52;
    float whiteTea = 16.23;
	float icedTea = 14.51;
	
	char highRating = 'A';
    char midRating = 'B';
    char lowRating = 'C';
   

    std::cout << "Best Tea of The Era PRESENTING\n";
	std::cout << "	SHARMA TEA CAFE			\n";

	std::cout << "\nPureTea is our "<< 'A' << " Grade Tea with the price of Rs." << pureTea <<"/kg\n"
            << "\nWhiteTea is our "<< 'B' << " Grade Tea with the price of Rs." << whiteTea <<"/kg\n"
	        << "\nIcedTea is our "<< 'B' << " Grade Tea with the price of Rs." << icedTea <<"/kg\n"
            << "\nIf you Buy all, Bill will be Rs." << pureTea + whiteTea + icedTea <<"/-"
            << "\n "
            << "\n "
            << "\tThank you very much for visiting\n"
            << "\n\n";

    system("pause");
    return 0;

}