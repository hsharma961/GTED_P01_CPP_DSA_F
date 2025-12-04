#include <iostream>
using namespace std;

// convert from inches to centimeters or centimeters to inches
// a suffix ’i’ or ’c’ indicates the unit of the input

int main() {
    
    constexpr double cm_per_inch = 2.54;
    double input;
    char unit;

        cout<<"convert inch and cm from input\n";
        
    while(cin>>input>>unit)
        if(unit=='i' || unit=='I')
            cout<< input <<" inch is " << input*cm_per_inch <<"cm\n";
        else if(unit=='c' || unit=='C')
            cout<< input <<" cm is " << input/cm_per_inch <<"inch\n";
        else 
            cout << unit << " is not in the database " << "\n"; 

    system("pause");
}