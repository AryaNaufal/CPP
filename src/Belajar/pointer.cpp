#include <iostream>

using namespace std;


void fungsi(int *a, int *b) {
   *b = *a;
}

int main() {
   int a = 10;
   int b = 20;

   fungsi(&a, &b);

   cout<<a<<endl;
   cout<<b<<endl;
   return 0;
}