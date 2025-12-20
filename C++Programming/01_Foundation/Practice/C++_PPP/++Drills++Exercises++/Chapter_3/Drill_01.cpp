/*[1] Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int val_01=0, val_02=0;

    cout<<"\tvalues from input\t\n"; 

    while(cin>> val_01 >> val_02){
      cout<< "value 1 = " << val_01 << "  value 2 = "  << val_02 <<'\n';
    }

  return 0;
}