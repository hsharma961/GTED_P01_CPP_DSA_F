/*Change the program so that it writes out the numbers are almost equal
after writing out which is the larger and the smaller if the two
numbers differ by less than 1.0/100.*/

#include <iostream>

int main(){
    
    double long smallest;
    double long largest;
     double long num;

    std::cout<<"provide values to check if they are \"smaller\" \"larger\" or \"equal\"\n";

    std::cin >> smallest ;
    largest = smallest;

    while(std::cin >> num ) // num is also 1 here for now
    {        
        if(num<smallest){
            smallest=num;
            std::cout << smallest << "  is smallest so far\n";
        }
        if(num>largest){
            largest=num;
            std::cout << largest << "  is largest so far\n";
        }

    }
        
    system("pause");
}