/*[2] Change the program to write out the smaller value is: followed by the
smaller of the numbers and the larger value is: followed by the larger
value.
[3] Augment the program so that it writes the line the numbers are equal
(only) if they are equal.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int val_01=0, val_02=0;

    cout<<"\tvalues from input\t\n"; 

    while(cin>> val_01 >> val_02){

          if(val_01==val_02){
              cout<< "the numbers are equal\n";

          }else if(val_01<val_02){
              cout<< "the smaller value is: " << val_01<<'\n';
              cout<< "the larger value is: " << val_02<<'\n';

          }else{
              cout<< "the smaller value is: " << val_02<<'\n';
              cout<< "the larger value is: " << val_01<<'\n';
          }

      cout<< "\n  value 1 = " << val_01 
          << "  value 2 = "  << val_02 <<'\n'<<'\n';
    }

  return 0;
}