/*Change the program to write out the smaller value is: followed by the
smaller of the numbers and the larger value is: followed by the larger
value.*/

#include <iostream>

int main(){
    
    int num1 = 0;
    int num2 = 0;

    std::cout<<"provide values\n";

    while(std::cin >> num1 && std::cin >> num2 )
    {
        std::cout << num1 <<" and "<< num2 <<'\n';
        
        // if smaller or equal
        if(num1<num2)
        {
            std::cout <<"smaller vlaue is: " << num1 <<'\n'; 
        }else{
            std::cout <<"smaller vlaue is: " << num2 <<'\n'; 
        }

        // larger
        if(num1>num2){
            std::cout <<" larger value is:  "<< num1 <<'\n';
        }else{
            std::cout <<" larger value is:  "<< num2 <<'\n';
        }
        
    }
        
    system("pause");
}