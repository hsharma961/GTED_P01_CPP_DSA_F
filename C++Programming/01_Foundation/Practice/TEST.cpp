#include <iostream>
#include <string> // Required for std::string

int main() {
    double total_pennies_input; // Variable to store the total pennies the user has

    std::cout << "How many pennies do you have?\n\n";
    std::cin >> total_pennies_input;

    int remaining_pennies = total_pennies_input; // Work with a copy of the total

    // Calculate the number of each coin type
    double doller = remaining_pennies / 100;      // How many whole dollars?
    remaining_pennies %= 100;                 // Pennies left after taking dollars

    double half_dollar = remaining_pennies / 50;  // How many whole half-dollars?
    remaining_pennies %= 50;                  // Pennies left after taking half-dollars

    double quarter = remaining_pennies / 25;     // How many whole quarters?
    remaining_pennies %= 25;                  // Pennies left after taking quarters

    double dime = remaining_pennies / 10;        // How many whole dimes?
    remaining_pennies %= 10;                  // Pennies left after taking dimes

    double nickel = remaining_pennies / 5;       // How many whole nickels?
    remaining_pennies %= 5;                   // Pennies left after taking nickels

    double penny_count = remaining_pennies;      // The rest are pennies

    std::cout << "\nBased on " << total_pennies_input << " pennies, you have:\n";

    // Output with pluralization
    if (doller > 0) {
        std::cout << " You have " << doller << (doller == 1 ? " dollar\n" : " dollars\n");
    }
    if (half_dollar > 0) {
        std::cout << " You have " << half_dollar << (half_dollar == 1 ? " half dollar\n" : " half dollars\n");
    }
    if (quarter > 0) {
        std::cout << " You have " << quarter << (quarter == 1 ? " quarter\n" : " quarters\n");
    }
    if (dime > 0) {
        std::cout << " You have " << dime << (dime == 1 ? " dime\n" : " dimes\n");
    }
    if (nickel > 0) {
        std::cout << " You have " << nickel << (nickel == 1 ? " nickel\n" : " nickels\n");
    }
    if (penny_count > 0) {
        std::cout << " You have " << penny_count << (penny_count == 1 ? " penny\n" : " pennies\n");
    }
    // Handle the case where the user entered 0 pennies
    else if (total_pennies_input == 0) {
        std::cout << " You have 0 pennies (and no other coins).\n";
    }

    // Consider alternative for pausing on non-Windows systems if needed
    // std::cout << "Press Enter to exit.";
    // std::cin.ignore(); // Consume any leftover newline character
    // std::cin.get();    // Wait for user to press Enter

    return 0;
}
