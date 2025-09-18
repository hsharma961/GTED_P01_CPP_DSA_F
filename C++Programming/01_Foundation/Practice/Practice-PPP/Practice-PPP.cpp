#include <iostream>
#include <string>
#include <sstream> // Required for stringstream

int main() {
    // 1. Get the input line.
    std::string inputLine = "The cat cat jumped, jumped cat again, cat is still being cat.";
    std::string wordToFind = "cat""jumped";

    // 2. Split the input line into words.
    // We can use a stringstream to treat the string like an input stream.
		std::stringstream stream(inputLine);
    std::string word;

    // 3. Initialize a variable `cat_count` to 0.
    int catJumpedCount = 0;

    // 4. For each word in the stream:
    // This loop reads words from the stream, separated by whitespace, until the end.
    while (stream >> word) {
        // 5. If the current word is "cat":
        if (word == wordToFind) {
            // 6. Increment `cat_count` by 1.
            catJumpedCount++;
        }
    }

    // 7. Print the final value of `cat_count`.
    std::cout << catJumpedCount;
    return 0;
}
