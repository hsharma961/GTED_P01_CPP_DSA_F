#include <iostream>
using namespace std;

int main() {
    
    constexpr double cm_per_inch = 2.54;
    double input;
    char unit;

        cout<<"convert inch and cm from input\n";
        cin>>input>>unit;

        switch(unit){
            case'i':
                cout<< input <<" inch= "<< input*cm_per_inch <<" cm\n";
                break;
            case'c':
                cout<< input <<" cm = "<< input/cm_per_inch <<" inch\n";
                break;
            default:
                cout << "Sorry, I don't know a unit called '" << unit << "'\n";
                break;
            }
        
    system("pause");
}