#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    vector<string> dictionary;

    cout<<"\t Read words into Dictionary \n";

    for(string words; cin>>words;)
    dictionary.push_back(words);
    cout<< "Dictionary = " << dictionary.size() <<'\n';    

    ranges::sort(dictionary);

    for(int i=0; i<dictionary.size(); ++i)
      if(i==0 || dictionary[i-1]!=dictionary[i])
        cout<<dictionary[i]<<'\n';

    system("pause");
    return 0;
}
