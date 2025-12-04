#include <iostream>
using namespace std;


int main() {

// char letter;

// while(cin >> letter )
//     if(letter == 'q' || letter=='r')
//         break;
//         cout<< letter <<'\n';
   char c;

    while (cin >> c) {

        if (c == 'q' || c == 'Q')
            break;                      // exit the loop

        cout << "ASCII: " << int(c) << "\n";
    }
    

    system("pause");
}