#include <iostream>
using namespace std;

int main() {
    int x;
    int sum = 0;

    while (cin >> x) {
        if (x == -1)
            break;          // stop the loop

        sum += x;           // add to sum
    }

    cout << "Sum = " << sum << "\n";

  system("pause");
return 0;
}