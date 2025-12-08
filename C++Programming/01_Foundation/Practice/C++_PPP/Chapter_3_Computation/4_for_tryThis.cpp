#include <iostream>
// using namespace std;

int main(){

  for(char small='a', upper='A', i='1'; small<='z'; ++i, ++small,++upper){
      std::cout << small << '\t' << upper << '\t' << static_cast<int>(small) <<'\t'<< static_cast<int>(i)<<'\n';
    
  }

system("pause");
return 0;
}

// Rewrite the character value example from the previous TRY THIS to use a
// for-statement. Then modify your program to also write out a table of the
// integer values for uppercase letters and digits.


