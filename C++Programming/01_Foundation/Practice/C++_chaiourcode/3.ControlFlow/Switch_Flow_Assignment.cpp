// pureTea = 22.52;
// whiteTea = 16.23;
// icedTea = 14.51;

#include <iostream>
#include <string>
int main()
{
	
        double price;
        char userChoice;
        
        std::cout << "\n\n"
                << "Best Tea of The Era PRESENTING\n"
                << "	SHARMA TEA CAFE			\n\n"
                << "\tWe have 3 Types of tea\n\n"
                << "\t1 for Pure_Tea\n"
                << "\t2 for White_Tea\n"
                << "\t3 for Iced_Tea\n\n\n"
                
                << "Choose name as per manu (EXACTLY)\n";
        
        std::cin>> userChoice;
        
            switch (userChoice)
                {
                    case 'p':
                        price=22.52;
                        std::cout << "Your bill for Pure_Tea is " << price <<std::endl;
                        break;
                    
                    case 'w':
                        price=16.23;
                        std::cout << "Your bill for White_Tea is " << price <<std::endl;
                        break;
                    
                    case 'i':
                        price=14.51;
                        std::cout << "Your bill for Iced_tea is " << price <<std::endl;
                        break;
                        
                    default:
                        std::cout << "Please check Tea name properly\n"
                                << "		TRY AGAIN!			\n";
                        break;

                }

    system("pause");
    return 0;
}

