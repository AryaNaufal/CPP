#include <iostream>
#include <limits>

using namespace std;

int main() {
  int a = 1;
  float b = 2.0;

  cout<<numeric_limits<float>::max()<<endl;
  cout<<numeric_limits<float>::min()<<endl;
  cout<<endl;
  cout<<numeric_limits<int>::max()<<endl;
  cout<<numeric_limits<int>::min()<<endl;
  cout<<endl;
  cout<<numeric_limits<double>::max()<<endl;
  cout<<numeric_limits<double>::min()<<endl;
  cout<<endl;
  cout<<numeric_limits<short>::max()<<endl;
  cout<<numeric_limits<short>::min()<<endl;
  cout<<endl;
  cout<<numeric_limits<long>::max()<<endl;
  cout<<numeric_limits<long>::min ()<<endl;
  cout<<endl;
  cout<<numeric_limits<char>::max()<<endl;
  cout<<numeric_limits<char>::min ()<<endl;

}