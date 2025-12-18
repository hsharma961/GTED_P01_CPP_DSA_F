#include <iostream>
using namespace std;

// making random funtions
int add (int x){
    (x*x);
    return (x*x);
}
int main()
{
    for (int i = 1; i<=20; i++)
        cout << i << '\t' << add(i)<< '\n';
        
    system("pause");
    return 0;
}