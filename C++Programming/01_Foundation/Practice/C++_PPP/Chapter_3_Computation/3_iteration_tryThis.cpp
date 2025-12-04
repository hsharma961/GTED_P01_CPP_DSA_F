#include <iostream>
using namespace std;

int main(){

  int number = 1;
  char letter = 'a';
    
    while(number<=26 && letter<='z'){
        cout << number << '\t' << letter <<'\n';
        ++number; ++letter;
    }

system("pause");
return 0;
}