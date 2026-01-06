/*[7] Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume
conversion factors 1m==100cm, 1in==2.54cm, 1ft==12in. Read the unit
indicator into a string. You may consider 12 m (with a space between
the number and the unit) equivalent to 12m (without a space).*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){



  double original_value = 0;
    string unit = "";
    double smallest = 0;
    double largest = 0;
    bool first = true; 

    constexpr double cm_to_m = 0.01;
    constexpr double in_to_m = 2.54 * cm_to_m;
    constexpr double ft_to_m = 12 * in_to_m;

    cout<< "enter the units to see smallest and largest length\n";


    while (cin >> original_value >> unit) {
        double converted_value = 0;
          
          if(unit=="m"){
            converted_value=original_value;
          }else if(unit=="cm"){
            converted_value=original_value*cm_to_m;
          }else if(unit=="in"){
            converted_value=original_value*in_to_m;
          }else if(unit=="ft"){
            converted_value=original_value*ft_to_m;
          }else{
            cout<<"invalid\n"<<unit<<"\n";
            continue;
          }
          
          if (first) {
            smallest = converted_value;
            largest = converted_value;
            first = false;
            cout << original_value  << unit << " is the first value ever\n";
          } else {
            if(converted_value<smallest){
              smallest=converted_value;
              cout<<original_value<<unit<<" smallest_so_far\n";
            }
            if(converted_value>largest){
                largest=converted_value;
                cout<<original_value<<unit<<" largest_so_far\n";
            }
          }
        }

  return 0;
}

