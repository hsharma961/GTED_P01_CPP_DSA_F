#include <iostream>
#include <string>

int main(){
    
    std::cout<<"enter your name:";
    std::string nam;
    std::getline(std::cin, nam);
    std::cout<<"hello "<<nam<<"\n";   
    system("pause");
    return 0;
}