#include <iostream>
using namespace std;

// Define the square function
/*int square(int x) {
    return x * x;
}*/

int main()
{
    int i = 1;
    char a = 'a';
   
    while (a <='z' && i<=26) 
            {cout << a++ << "\t" << i++ << endl;}

    system("pause");
    return 0;
}