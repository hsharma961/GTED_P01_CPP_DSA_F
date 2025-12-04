#include <iostream>
using namespace std;
int main() {
    int a=0;
    int b=0;
    
    cout<<"please enter 2 integers\n";
    while(cin>> a >> b)

        if(a<b)
            cout<< a <<" is smaller then "<< b <<'\n';
        else if(a==b)
            cout<< a <<" is equal to "<< b <<'\n';
        else
            cout<< a <<" is larger to "<< b <<'\n';   

    system("pause");
}
