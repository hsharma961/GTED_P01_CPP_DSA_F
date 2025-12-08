#include <iostream>
// using namespace std;

int square (int x){

return x*x;
}

int main(){
  int i =1;
  while (i<100){
    std::cout<<i<<'\t'<<square(i)<<'\n';
    ++i;
  }

  system("pause");
  return 0;
}

