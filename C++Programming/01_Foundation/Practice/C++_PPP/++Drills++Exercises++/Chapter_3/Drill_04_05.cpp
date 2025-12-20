/*[4] Change the program so that it uses doubles instead of doubles.
[5] Change the program so that it writes out the numbers are almost equal
after writing out which is the larger and the smaller if the two
numbers differ by less than 1.0/100.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    double val_01=0, val_02=0;

    cout<<"\tvalues from input\t\n"; 

    while(cin>> val_01 >> val_02){

          if(val_01==val_02){
              cout<< "the numbers are equal\n";
              
          }else if(abs(val_01-val_02)<0.01){
              cout<< "the numbers are ALMOST equal\n";

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