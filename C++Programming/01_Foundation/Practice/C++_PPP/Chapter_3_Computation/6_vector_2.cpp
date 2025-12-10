#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  
  std::vector<double>temps;
  double sum=0;

  std::cout<<"\ntemperature input\n";

    for(double temp; std::cin>>temp;)
      temps.push_back(temp);

    // for(double t=0; t<temps.size(); ++t)
    //   sum+=temps[t];

      for(double t:temps)
      sum+=t;

    std::ranges::sort(temps); // shorting algorithm "std::ranges::sort()"

  std::cout <<"\nTemprature Sum = "<<sum
            <<"\n           Size = "<<temps.size()
            <<"\n           Average = "<<sum/temps.size()
            <<"\n           Median = "<<temps[temps.size()/2]<<'\n';
            

    system("pause");
    return 0;
}