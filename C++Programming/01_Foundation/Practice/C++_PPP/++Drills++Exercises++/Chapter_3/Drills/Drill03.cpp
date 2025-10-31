/*Augment the program so that it writes the line the numbers are equal
(only) if they are equal.*/

#include <iostream>

int main(){
    
    int num1 = 0;
    int num2 = 0;

    std::cout<<"provide values to check if they are \"smaller\" \"larger\" or \"equal\"\n";

    while(std::cin >> num1 && std::cin >> num2 )
    {
        std::cout << num1 <<" and "<< num2 <<'\n';

        if(num1<num2){
            std::cout <<"smaller vlaue is: " << num1 <<'\n'; 
            std::cout <<" larger value is:  "<< num2 <<'\n';

        }else if(num1>num2){
            std::cout <<"smaller vlaue is: " << num2 <<'\n';
            std::cout <<" larger value is:  "<< num1 <<'\n';

        }else {
            std::cout << " the numbers are equal\n";
        }
        
    }
        
    system("pause");
}

