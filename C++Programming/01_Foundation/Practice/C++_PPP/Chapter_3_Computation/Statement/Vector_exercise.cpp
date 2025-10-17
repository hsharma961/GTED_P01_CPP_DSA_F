/*Write a program that “bleeps” out words that you don’t like; that is, you
read in words using cin and print them again on cout. If a word is among a
few you have defined, you write out BLEEP instead of that word. Start with
one “disliked word”*/

#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
using namespace std;


int main()
{
    vector<string>words;
    vector<string> disliked = { "hitesh" ,"priya"};
    
    string temp;
    
    cout << "Enter your words\n";
    for(string temp; cin>>temp;)
        words.push_back(temp);
    cout << "Number of words:" << words.size() << '\n';

        for(int j; j<disliked.size(); ++j)
            disliked = words;
            cout << "beep\n";

    ranges::sort(words);
    
    for(int i=0; i<words.size();++i)
        if(i==0||words[i-1]!=words[i])
        cout << words[i]<<'\n';
    
}