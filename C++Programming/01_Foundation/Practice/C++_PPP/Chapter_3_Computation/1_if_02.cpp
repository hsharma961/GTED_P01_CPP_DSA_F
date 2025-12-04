#include <iostream>
using namespace std;


int main() {
    string signal; //Red-Stop, Green-GO, Yellow-Caution;
    
    cout<<"please check signels R, G, Y :\n\n";
    while(cin>> signal)

        if(signal == "R" || signal == "r")
            cout<<"Stop"<<'\n';
        else if(signal == "Y"||signal == "y")
            cout<<" Caution "<<'\n';
        else if(signal == "G"||signal == "g")
            cout<<" GO "<<'\n';   

    system("pause");
}