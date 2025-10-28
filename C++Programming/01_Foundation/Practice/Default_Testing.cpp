// input words using vector and BLOOP words you don't want to read from input.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> words;// word
    vector<string> curse = {"bad"};//bad_word

    cout << "enter words carefully\n";

        for(string temp; cin >> temp;){ // "temp" string for input of vector words,

            bool bw=false;// bool variable to recognise "bw"(bad words), right now its kept "false" as we didn't input anything,
            for(string bad_word:curse){// converts vector curse into string bad_word, to 
                if(temp==bad_word){// if temp input is bad word
                    bw=true;// bw is true
                    }
                }
                
                    if (bw){ words.push_back("BLOOPS");}//whenever input is bad_word which is true, vector will replace "BLOOPS" with that word,
                    else { words.push_back(temp);} 
                }
                    
            for(string word:words){
            cout<<word<<'\n';
                }
        cout<<"total = "<<words.size() << " words\n";

    system("pause");
    return 0;
}