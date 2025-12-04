#include <iostream>
using namespace std;


int main() {

int a = 0, b= 5;

  cout<<"enter\n";
  while(cin>>a)
    if (a<=b) {
// do nothing
}
else { // swap a and b:
int t = a;
a = b;
b = t;
cout<<"output" << b <<'\n';
}

    system("pause");
}