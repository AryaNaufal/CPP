#include <iostream>

using namespace std;
int perkalian (int a, int b);

int main() {
  int z;

  z = perkalian(3,4);

  cout<<"Hasil Perkalian: "<<z;
}

int perkalian (int a, int b) {
  int r = a*b;
  return r;
}