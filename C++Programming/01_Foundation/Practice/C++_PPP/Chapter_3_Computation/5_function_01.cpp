#include <iostream>
// using namespace std;
void squareRoot (int v){

std::cout<<'\t'<<v<<'\t'<<v*v<<'\n';
}

void cubeRoot (int x){

std::cout<<'\t'<<x<<'\t'<<x*x*x<<'\n';
}

int main(){

    std::cout<<"\t\tSquares\n";

    for(int i=1; i<=30;++i){
      squareRoot(i);
    }
    
      std::cout<<"\n\t\t Cubes\n";

    for(int i=1; i<=30;++i){
      cubeRoot(i);
    }  

  system("pause");
return 0;
}

