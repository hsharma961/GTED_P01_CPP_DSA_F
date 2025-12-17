#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  
   vector<double>temps;
  double sum=0;

   cout<<"\ntemperature input\n";

    for(double temp;  cin>>temp;)
      temps.push_back(temp);

    // for(double t=0; t<temps.size(); ++t)
    //   sum+=temps[t];

      for(double t:temps)
      sum+=t;

     ranges::sort(temps); // shorting algorithm " ranges::sort()"

   cout <<"\nTemprature Sum = "<<sum
            <<"\n           Size = "<<temps.size()
            <<"\n           Average = "<<sum/temps.size()
            <<"\n           Median = "<<temps[temps.size()/2]<<'\n';
            

    system("pause");
    return 0;
}