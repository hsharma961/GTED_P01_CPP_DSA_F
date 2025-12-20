/*[6] Now change the body of the loop so that it reads just one double each
time around. Define two variables to keep track of which is the
smallest and which is the largest value you have seen so far. Each
time through the loop write out the value entered. If it’s the smallest
so far, write the smallest so far after the number. If it is the largest so
far, write the largest so far after the number.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    double smallest, largest, num;
    
    cout<<"\t Input a value \t\n"; 

    cin>>smallest;
    largest = smallest; //("This is called an invariant:")You must establish a valid reference point before the loop.

        while(cin>>num){

        if (num<smallest){
            // smallest=num;
            cout<<" is smallest so far ";

        }if (num>largest){
            // largest=num;
            cout<<" is largest so far ";
        }
    }

  return 0;
}