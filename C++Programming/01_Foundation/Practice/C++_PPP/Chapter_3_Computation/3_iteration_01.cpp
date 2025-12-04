#include <iostream>
using namespace std;

int square (int x)
{
    return x*x;
}



int main(){

    int i=0;
    while(i<10){
        cout<< i <<'\t'<< square(i) <<'\n';
        ++i;
    }

  system("pause");
return 0;
}