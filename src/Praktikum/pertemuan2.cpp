#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   char A[3][5] = {
       'A', 'B', 'C', 'D',
       'E', 'F', 'G', 'H',
       'I', 'J', 'K', 'L'};
   // 2 Dimensi
   // char *p;
   // p = &A[0][0];
   // cout<<*p;
   // p = &A[1][3];
   // cout<<*p;

   // 1 Dimensi
   // char *p;
   // p = A[0];
   // for (int i = 0; i < 15; i++){
   //    cout<<setw(2)<<*p++;
   // }

   // for (int i = 0; i < 3; i++) {
   //    for (int j = 0; j < 5; j++) {
   //       cout << setw(2) << *p++;
   //    }
   //    cout << endl;
   // }

   // int arr[3][4];
   // int *pA=arr[0];

   // for (int i = 0; i < 3; i++) {
   //    for (int j = 0; j < 4; j++) {
   //       cout<<"arr["<<i<<"]["<<j<<"] ="<<pA++<<endl;
   //    }

   // }

   // char kalimat[] = {"Universitas Pamulang di Tangerang Selatan"};

   // char *p = kalimat;
   // for (int i = 0; i < sizeof(kalimat); i++) {
   //    if (i>=12 && i<=40) {
   //      cout<<*p;
   //    }
   //    *p++;
   // }

   // char kalimat[] = {"Selamat Belajar Bahasa C++"};
   // char *pKarakter;
   // int LowerCase = 0;
   // int UpperCase = 0;

   // pKarakter = kalimat;

   // while (*pKarakter){
   //    char kar = *pKarakter;
   //    if (kar >= 'a' && kar <= 'z'){
   //       LowerCase++;
   //    }
   //    if (kar >= 'A' && kar <= 'Z'){
   //       UpperCase++;
   //    }
   //    pKarakter++;
   //    cout << "Jumlah Huruf Kecil: " << LowerCase << endl;
   // }



   char kalimat[] = {"Jakarta Kota Metropolitan XYZ"};
   char *p, kar;
   p = kalimat;
   cout << "Kalimat: " << kalimat << endl;
   cout<<sizeof(kalimat);

   for (int i = 0; i < sizeof(kalimat); i++){
      kar = *p;
      if (kar >= 'a' && kar <= 'z'){
         kar += 3;
         if (kar > 'z'){
            kar = kar - 'z' + 'a' - 1;}
         if (kar >= 'A' && kar <= 'Z'){
            kar += 3;
         }
      }
   }

   return 0;
}