//Sum of all odd numbers (for loop)

#include <iostream>

int main(){

    int odd=1;
    int sum=0;

    while(odd<=5){
        if(odd%2!=0){
            sum += odd;
        }
            odd++;
    }
         std::cout << sum <<'\n';
        
    system("pause");
}
