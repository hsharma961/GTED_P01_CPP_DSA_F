/*[6] Now change the body of the loop so that it reads just one double each
time around. Define two variables to keep track of which is the
smallest and which is the largest value you have seen so far. Each
time through the loop write out the value entered. If it’s the smallest
so far, write the smallest so far after the number. If it is the largest so
far, write the largest so far after the number.

[7] Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume
conversion factors 1m==100cm, 1in==2.54cm, 1ft==12in. Read the unit
indicator into a string. You may consider 12 m (with a space between
the number and the unit) equivalent to 12m (without a space).*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<double>input_count;
    double smallest =0;
    double largest =0; 
    double value =0;
    string unit;

// 1m==100cm, 1in==2.54cm, 1ft==12in
    constexpr double cm_to_m =0.01;
    constexpr double in_to_m =2.54*cm_to_m;
    constexpr double ft_to_m =12*in_to_m;

    cout<<"\t Input the values with there units (m, ft, in, cm): \t\n"; 

    bool first_input_value = true;

    while(cin>>value>>unit){
      double value_in_m;

      if(unit=="m"){
          value_in_m=value;
        }else if(unit=="cm"){
          value_in_m=value*cm_to_m;
        }else if(unit=="in"){
          value_in_m=value*in_to_m;
        }else if(unit=="ft"){
          value_in_m=value*ft_to_m;
        }else {
            cout << "Invalid unit: \n";
            continue;
        }
        
        input_count.push_back(value_in_m);

          cout << value << unit<<"\n";

          if(first_input_value){

              smallest = value_in_m;
              largest = value_in_m;
              first_input_value=false;
              cout<<value<<unit<<" is the first value \n";

          }else{

              if (value_in_m<smallest){
                  smallest=value_in_m;
                  cout<<value<<unit<<" is smallest so far \n";
              }
              if (value_in_m>largest){
                  largest=value_in_m;
                  cout<<value<<unit<<" is largest so far \n";
                }
             }
         }
    
        cout << "\nSummary of all values (in meters):\n";
        for (double all_values : input_count) {
        cout << all_values << '\n';
        }
   


  return 0;
}