/*[1] Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.*/

#include <iostream>

int main(){
    
    int num1 = 0;
    int num2 = 0;

    std::cout<<"provide values\n";

    while(std::cin >> num1 && std::cin >> num2 ){
        std::cout << num1 <<" and "<< num2 <<'\n';
    }
        
    system("pause");
}