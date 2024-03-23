#include <iostream>
#include <iomanip>

using namespace std;

int main(){

/*  
  Menampilkan:
  Huruf kecil & Besar
  Angka
  Selain dari huruf kecil, besar, dan angka
  Total semua huruf/angka 
*/
  
  char kalimat[] = {"Selamat Belajar Bahasa C++ "};
  char *pKarakter;
  int jmlAngka = 0;
  int selainnya = 0;
  int jmlHuruf = 0;
  int LowerCase = 0;
  int UpperCase = 0;

  pKarakter = kalimat;

  while (*pKarakter)
  {
    char kar = *pKarakter;
    if (kar >= 'a' && kar <= 'z')
    {
      LowerCase++;
    }
    if (kar >= 'A' && kar <= 'Z')
    {
      UpperCase++;
    }
    if (kar >= '0' && kar <= '9')
    {
      jmlAngka++;
    }
    else
    {
      selainnya++;
    }
    pKarakter++;
  }

  jmlHuruf = LowerCase + UpperCase;

  cout << "Jumlah Huruf Kecil = " << LowerCase << endl;
  cout << "Jumlah Huruf Besar = " << UpperCase << endl;
  cout << "Jumlah Angka = " << jmlAngka << endl;
  cout << "Jumlah Selainnya = " << selainnya << endl;
  cout << "Total Huruf = " << jmlHuruf << endl;
}
