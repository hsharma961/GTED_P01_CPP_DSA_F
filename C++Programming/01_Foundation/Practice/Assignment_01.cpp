#include <iostream>
#include <string>

int main() {

    long double IcedTea = 14.50;
    long double PureTea = 22.50;
    int WhiteTea = 16.20;
   

    std::cout << "Best Tea of The Era PRESENTING\n";

    std::cin >> IcedTea >> PureTea >> WhiteTea;

    std::cout << "\nIcedTea Class \"C\" " << IcedTea << "\n";
    std::cout << "PureTea Class \"A\" " << PureTea << "\n";
    std::cout << "WhiteTea Class \"B\" " << WhiteTea << "\n";
    std::cout << "Choose Your Flavour\n" << "\n";

    std::cout << "IcedTea Rs." << IcedTea << "/kg \"C\" Class\n";

    system("pause");
    return 0;

}