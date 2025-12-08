#include <iostream>
// using namespace std;

int square (int x){

return x*x;
}

int main(){

  for(int i=1; i<100; ++i){
    std::cout<<i<<'\t'<<square(i)<<'\n';
  }

  system("pause");
return 0;
}

