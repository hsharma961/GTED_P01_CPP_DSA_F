/*Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume
conversion factors 1m==100cm, 1in==2.54cm, 1ft==12in. Read the unit
indicator into a string. You may consider 12 m (with a space between
the number and the unit) equivalent to 12m (without a space).*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    
    double long smallest;
    double long largest;
    double long num;

     cout<<"provide values to check if they are \"smallest so far\" \"largest so far\"\n";
      
     cin >> smallest ;
    largest = smallest;

    while( cin >> num)
    {        
        if(num<smallest){
            smallest=num;
             cout << smallest <<"  is smallest so far\n";
        }
        if(num>largest){
            largest=num;
             cout << largest <<"  is largest so far\n";
        }

    }
        
    system("pause");
}