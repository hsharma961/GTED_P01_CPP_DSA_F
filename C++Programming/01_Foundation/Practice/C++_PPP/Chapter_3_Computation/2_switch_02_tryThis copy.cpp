/*Rewrite above below
use a switch-statement. Add a conversion from Swiss francs. Which version
of the program is easier to write, understand, and modify? Why?

Use the example above as a model for a program that converts yen_to_usd ('y'),
kroner_to_usd ('k'), and pound_to_usds ('p') into usds. If you like realism, you can find
conversion rates on the Web.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    constexpr double yen_to_usd = 0.0064;
    constexpr double kroner_to_usd = 0.093;
    constexpr double pound_to_usd = 1.27;
    constexpr double francs_to_usd = 1.24;
    
    double unit;
    char currency;

        cout<<"convertion program for yen y, kroner k, Swiss francs s and pound p into usds\n";
        
    while(cin>>unit>>currency){

        switch(currency){
            case 'y': case 'Y':
                if(unit==1 || unit==0){
                    cout<< unit <<" yen is "<<unit*yen_to_usd <<" doller(s)\n";
                }else{
                    cout<< unit <<" yens are "<<unit*yen_to_usd <<" doller(s)\n";
                }
                break;

            case 'k': case 'K':
                if(unit==1 || unit==0){
                    cout<< unit <<" kroner is "<<unit*kroner_to_usd <<" doller(s)\n";
                }else{
                    cout<< unit <<" kroners are "<<unit*kroner_to_usd <<" doller(s)\n";
                }
                break;

            case 'p': case 'P':
                if(unit==1 || unit==0){
                    cout<< unit <<" pound is "<<unit*pound_to_usd <<" doller(s)\n";
                }else{
                    cout<< unit <<" pounds are "<<unit*pound_to_usd <<" doller(s)\n";
                }
                break;
                
                case 's': case 'S':
                if(unit==1 || unit==0){
                    cout<< unit <<" Swiss franc is "<<unit*francs_to_usd <<" doller(s)\n";
                }else{
                    cout<< unit <<" Swiss francs are "<<unit*francs_to_usd <<" doller(s)\n";
                }
                break;

            default:
                cout<<"I am not able to recognise the currency: "<<currency <<"\n";
                break;
                
                    
        }
    }


  system("pause");

}