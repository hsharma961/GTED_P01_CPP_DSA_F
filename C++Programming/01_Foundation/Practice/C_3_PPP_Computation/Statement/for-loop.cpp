#include <iostream>
using namespace std;

int main()

{
    char a = 'a';
    int i=1;

    for ( a<='z'; i<=26; i++, a++)

        cout << a << '\t' << i << endl;
        
    system("pause");
    return 0;
}

// Output:
// a  1
// b  2
// c  3
//.....
// z  26
