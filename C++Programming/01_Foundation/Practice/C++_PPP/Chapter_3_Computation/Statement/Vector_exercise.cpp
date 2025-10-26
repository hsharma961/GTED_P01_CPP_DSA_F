/*Write a program that “bleeps” out words that you don’t like; that is, you
read in words using cin and print them again on cout. If a word is among a
few you have defined, you write out BLEEP instead of that word. Start with
one “disliked word”*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    // List to store all the words user will type
    vector<string> words;
    
    // Our list of words we don't like - these will be replaced with "beep"
    vector<string> disliked = { "bad", "kill", "hate", "ugly" };
    
    // Temporary string to hold each word as we read it
    string temp;
    
    // Ask user to start typing words
    cout << "\nEnter your words (press Ctrl+Z when done)\n";
    // Keep reading words until user presses Ctrl+Z
    while(cin >> temp) {
        // Add each word to our list
        words.push_back(temp);
    }
    
    // Tell user how many words they typed
    cout << "Number of words: " << words.size() << '\n';

    // Now let's process each word they typed
    // cout << "\nHere are your words (with beeps for bad words):\n";
    for(const string& word : words) {                     // For each word they typed...
        bool bw = false;                      // Start by assuming it's a good word
        
        // Check if this word is in our "disliked" list
        for(const string& is_bad_word : disliked) {
            if(word == is_bad_word) {                        // If we found a match...
                bw = true;                    // Remember we found a bad word
                break;                                     // No need to check other bad words
            }
        }
        
        // Decide what to print
        if(bw) {
            cout << "beep\n";                            // Found a bad word - print beep
        } else {
            cout << word << '\n';                        // Good word - print it normally
        }
    }

    system("pause");
    return 0;
    
}