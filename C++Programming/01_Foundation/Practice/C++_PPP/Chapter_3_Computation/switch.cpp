#include <iostream>
using namespace std;

int main() {
    
    // values in a dollar
    double
     yen = 0.0067, // 1 yen per dollar
     kroner = 0.0628, // 1 kroner per doller
     pound = 1.34, // 1 pound per dollar
     rupee = 0.013, // 1 rupee per dollar 
     dollar;

    char unit;

    cout <<"....CURRENCY CONVERTER....\n\n"
         << "Type 'y' for yens,\n"
         << "Type 'r' for yens,\n"
         << "Type 'k' for kroners, \n"
         << "Type 'p' for pounds \n\n";
    cin >> dollar >> unit;

    cout <<'\n';

    
        switch (dollar,unit){
            case 'y':
            cout <<  dollar << " Yen(s) are: " << yen * dollar << "$" << "\n";
            break;

            case 'r':
            cout <<  dollar << " Rupee(s) are: " << rupee * dollar << "$" << "\n";
            break;

            case 'k':
            cout <<  dollar << " kroner(s) is: " << kroner * dollar << "$" << "\n";
            break;

            case 'p':
            cout <<  dollar << " Pound(s) are " << pound * dollar << "$" << "\n";
            break;

            default:
            cout << "I don't know a unit called '" << unit << "'\n";
            break;
        }
    system("pause");
}
        

/*Use the example above as a model for a program that converts yen ('y'),n
kroner ('k'), and pounds ('p') into dollars. If you like realism, you can find
conversion rates on the Web.*/