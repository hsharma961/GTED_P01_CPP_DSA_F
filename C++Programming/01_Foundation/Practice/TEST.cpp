#include <iostream>

int main() {
    int a = 5;
    int b = ++a; // pre-increment

    // After this line:
    // The value of 'a' is 6.
    // The value of 'b' is 6 (because 'a' was incremented first).

    std::cout << "a: " << a << std::endl; // Prints "a: 6"
    std::cout << "b: " << b << std::endl; // Prints "b: 6"
    std::cout << std::endl;

    int c = 5;
    int d = c++; // post-increment

    // After this line:
    // The value of 'c' is 6.
    // The value of 'd' is 5 (because 'c's original value was used first).

    std::cout << "c: " << c << std::endl; // Prints "c: 6"
    std::cout << "d: " << d << std::endl; // Prints "d: 5"

    return 0;
}
