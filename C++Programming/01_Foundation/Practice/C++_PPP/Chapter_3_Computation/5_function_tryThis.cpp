#include <iostream>
#include <cmath>

int square (int x){
  int result=0;
    for(int i=0;i<x; ++i)
      result +=x;
  return result;
}

int main(){
  
  for(int i=1; i<=20; ++i){
    std::cout<<i<<'\t'<<square(i)<<'\n';
  } 
  system("pause");
  return 0;
} 
