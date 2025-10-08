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
   
    while (a <='z') {
        cout << a++ << "\t" << i << endl;
        ++i;
        
        }
    system("pause");
    return 0;
}