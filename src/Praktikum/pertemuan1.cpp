#include <iostream>

using namespace std;

int main() {
   // Menggabungkan array, string, dan pointer

   string arr[3] = {"Arya", "Tono", "Anto"};

   cout<<sizeof(arr[0]);
   for (int i = 0; i < 3; i++){
      cout<<arr[i]<<endl;
   }

   cout<<*arr;
   
}