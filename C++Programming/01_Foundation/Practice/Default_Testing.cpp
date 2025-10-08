#include <iostream>
using namespace std;

int add (int x){
    x+x + (x*x);
    return x+x + (x*x);
}
int main()
{
    for (int i = 0; i<10; ++i)
        cout << i << '\t' << add(i)<< '\n';
        
    system("pause");
    return 0;
}