#include <iostream>
#include <vector>


int main(){

  std::vector<int>num={45,34,86,57,48,26};
  for(int i=0; i<num.size(); ++i){
      std::cout<<num[i]<<'\n';
  }
  
  system("pause");
  return 0;
}
