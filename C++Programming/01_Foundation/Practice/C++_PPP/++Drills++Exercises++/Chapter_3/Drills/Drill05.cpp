/*Change the program so that it writes out the numbers are almost equal
after writing out which is the larger and the smaller if the two
numbers differ by less than 1.0/100.*/

#include <iostream>

int main(){
    
    double long num1 = 0;
    double long num2 = 0;

    std::cout<<"provide values to check if they are \"smaller\" \"larger\" or \"equal\"\n";

    while(std::cin >> num1 && std::cin >> num2 )
    {
        std::cout << num1 <<" and "<< num2 <<'\n';

        if(num1==num2){
            std::cout << " the numbers are equal \n";
        // }else if(num1){
        //     std::cout << "the numbers are almost equal \n";
        }else if(num1<num2){
            std::cout <<"smaller vlaue is: " << num1 <<'\n'; 
            std::cout <<" larger value is:  "<< num2 <<'\n';
        }else if(num1>num2){
            std::cout <<"smaller vlaue is: " << num2 <<'\n';
            std::cout <<" larger value is:  "<< num1 <<'\n';
        }
    }
        
    system("pause");
}