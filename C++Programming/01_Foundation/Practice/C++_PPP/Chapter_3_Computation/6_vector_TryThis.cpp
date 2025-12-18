#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

  vector<string>input_words;
  vector<string>bleep_words = {"fat","ugly", "bad"};
  bool is_bleep_word;

    cout<<"Enter words, but using words (fat ugly bad) is BLEEPED "<<'\n';


    for(string temp; cin>>temp;){
      input_words.push_back(temp);
    }

      for(const string& word:input_words){
        is_bleep_word=false;

        for(const string& banned:bleep_words ){
          if(word == banned){
           is_bleep_word = true;
              break;
            }
          }

        cout << (is_bleep_word ? "***** " : word + " "); /* compressed version of 
                                                          if (is_bleep_word) 
                                                          //cout<<"  *****  "; 
                                                          //else 
                                                          //cout<< word << " ";
                                                          */
          
      } 
      
  cout<< '\n';
  
  return 0;
}