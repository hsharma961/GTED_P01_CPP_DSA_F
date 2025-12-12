#include <iostream>
#include <vector>

int main(){

std::vector<int> numbers = {1, 2, 3};

  // for (int x : numbers) {
  //   std::cout << x * 2 << " "; 
  // }

for (int i = 0; i < numbers.size(); ++i) {
    int x = numbers[i]; // The hidden magic of the range-based loop
    std::cout << x * 2 << " \n";
}

    system("pause");
}