/*Use the example above as a model for a program that converts yen_to_usd ('y'),
kroner_to_usd ('k'), and pound_to_usds ('p') into usds. If you like realism, you can find
conversion rates on the Web.*/

// 1 yen_to_usd = 0.0065 usds
// 1 kroner_to_usd = 0.093 usds
// 1 pound_to_usd = 1.27 usds

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    constexpr double yen_to_usd = 0.0064;
    constexpr double kroner_to_usd = 0.093;
    constexpr double pound_to_usd = 1.27;
    double unit;
    char currency;

        cout<<"convertion program for yen y, kroner k, and pound p into usds\n";
        
    while(cin>>unit>>currency){

        if(currency== 'y' || currency=='Y'){
            cout << unit << "yen(s)= " << unit*yen_to_usd << " usd(s)\n";
            
        }else if(currency== 'k' || currency=='K'){
                cout << unit << "kroner(s)= " << unit*kroner_to_usd << " usd(s)\n";

        }else if(currency== 'p' || currency=='P'){
            cout << unit << "pound(s)= " << unit*pound_to_usd << " usd(s)\n";
            
        }else{
            cout <<"wrong currency code\n";
        }
    }


  system("pause");

}