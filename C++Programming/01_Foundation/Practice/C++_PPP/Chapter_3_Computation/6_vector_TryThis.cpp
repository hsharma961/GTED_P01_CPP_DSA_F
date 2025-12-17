#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    vector<string>liked;//"input_words" would be cleaner
    vector<string>disliked = {"fat","ugly", "bad"};
    bool is_disliked;

    cout<<"Enter words, but using words (fat ugly bad) is BLEEPED "<<'\n';

   for(string temp; cin>>temp;){
      liked.push_back(temp);
        }

       for(string words:liked){
        is_disliked =0;//false would have been better

         for (string bad_words:disliked){// convert vector to act as single word string
              if(bad_words == words){
               is_disliked = 1;
               break;
              }
          }

      if(is_disliked){
      cout<<"  BLEEP  ";
    }else{
        cout<< words;
      }
    }

    cout<<'\n';

  system("pause");
  return 0;
}


