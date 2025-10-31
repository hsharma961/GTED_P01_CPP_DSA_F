// ----------------------------------------------------------------------------------
// This program reads words that a user types and replaces any "bad" words with "BLOOPS".
// It demonstrates basic concepts like vectors (dynamic lists) and loops.
// ----------------------------------------------------------------------------------

#include <iostream> // This line includes the Input/Output library, which allows us to print to the screen (cout) and read from the keyboard (cin).
#include <vector>   // This line includes the Vector library, which gives us a special kind of list that can grow or shrink in size.
#include <string>   // We need this library to work with strings (sequences of text).
using namespace std; // This line means we don't have to write "std::" in front of every standard C++ feature like `cout`, `cin`, `vector`, etc.

int main()
{
    // A vector is like a list that can hold many items of the same type.
    // Here, we create two lists to store our words.
    vector<string> words; // This list will hold all the words the user types.
    vector<string> curse = {"bad", "nasty", "ugly"}; // This list holds our "curse" words. We've added more to make the program more useful.
    string temp; // A temporary variable to hold each word as we read it from the user.

    // A simple message to the user explaining what to do.
    cout << "enter words carefully (Press Ctrl+Z then Enter to finish typing)\n";

    // This loop runs as long as the user keeps typing words.
    // `cin >> temp` reads one word at a time from the keyboard into the `temp` variable.
    for(string temp; cin >> temp;) { 
        // This loop checks the word the user just typed against our list of bad words.
        // We'll process each word right after the user types it.
        
        bool is_bad = false; // We create a "flag" variable. A flag is a simple switch.
                             // We assume the word is NOT bad, so we set the flag to 'false'.

        // This loop goes through each word in our `curse` vector (our bad words list).
        for(string bad_word : curse){
            // This `if` statement checks if the user's word (`temp`) is the same as a bad word.
            if(temp == bad_word){
                is_bad = true; // If we find a match, we flip our "flag" to 'true'.
                break; // We found a match, so there's no need to keep checking the rest of the curse words. We can exit this inner loop early.
            }
        }
        
        // After checking the word against all the curse words, we look at our flag.
        if (is_bad){
            // If the flag is 'true', it means we found a bad word.
            // So, we add "BLOOPS" to our final list of words.
            words.push_back("BLOOPS");
        } else {
            // If the flag is 'false', it means the word was not in our curse list.
            // We add the original word to our final list.
            words.push_back(temp);
        }
    } // The input loop ends here. All the user's words have been processed.
                    
    // Now we print the results.
    // This loop goes through every word in our `words` vector (the final, processed list).
    for(string word : words){
        cout << word << '\n'; // We print each word followed by a new line.
    }

    // A final message showing the total number of words processed.
    cout << "\nTotal of " << words.size() << " words processed.\n";

    system("pause"); // This is a specific command for Windows to pause the console window so you can see the output.
    return 0; // This tells the operating system that the program finished successfully.
}
