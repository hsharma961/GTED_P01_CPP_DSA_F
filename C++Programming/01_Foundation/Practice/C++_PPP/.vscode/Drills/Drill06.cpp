/*Now change the body of the loop so that it reads just one double each
time around. Define two variables to keep track of which is the
smallest and which is the largest value you have seen so far. Each
time through the loop write out the value entered. If it’s the smallest
so far, write the smallest so far after the number. If it is the largest so
far, write the largest so far after the number.*/

#include <iostream>

int main(){
    
    double long smallest;
    double long largest;
     double long num;

    std::cout<<"provide values to check if they are \"smallest so far\" \"largest so far\"\n";

    // my first assigned value is 2 and continues 

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