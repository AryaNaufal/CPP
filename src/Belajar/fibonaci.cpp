#include <iostream>

using namespace std;

int main() {
  // Rumus fibonaci = fn = f(n1) + f(n2)
  int f_n;
  int f_n1;
  int f_n2;

  int n;
  cout<<"Silahkan Masukan Nilai n: ";
  cin>>n; //Menentukan Nilai ke n
  cout<<n<<endl;

  // 3 = 1 + 2
  f_n1 = 1; // Nilai f(n1) adalah nilai awal penjumlahan
  f_n2 = 0; // Nilai f(n2) adalah nilai yang dijumlahkan dengan nilai awal
  // jadi Nilai f_n = f_n1 + f_n2


  for (int i = 1; i < n; i++)
  {
    // f_n1 = 1 dan f_n2 = 0
    f_n = f_n1 + f_n2; // 1 = 1 + 0
    f_n2 = f_n1; // f_n2 = 1
    f_n1 = f_n; // fn_1 = hasil dari 1 + 0
    // dst, berulang hingga nilai i < n
    
    cout<<f_n;
  }
  
}