#include <iostream>
using namespace std;

int main()
{
   // Soal:
   // 3 Mapel (Indonesia, Inggris, Matematika)
   // Jumlah siswa tidak diketahui
   // Buat array 2 dimensi untuk menampung 3 nilai dari 1 siswa
   // Jumlah siswa ditentukan saat program dijalankan
   // Tampilkan masukan nilai dari pengguna, beserta rata-rata dari tiap siswa

   int jumlahSiswa;
   string mataPelajaran[] = {"Indonesia", "Inggris", "Matematika"};

   cout << "Banyak siswa : ";
   cin >> jumlahSiswa;
   cout<<endl;

   double nilaiSiswa[jumlahSiswa][3];

   for (int i = 0; i < jumlahSiswa; i++){
      cout << "Nilai siswa " << i + 1 << ": " << endl;
      for (int j = 0; j < 3; j++){
         cout << "Nilai " << mataPelajaran[j] << " : ";
         cin >> nilaiSiswa[i][j];
      }
      cout << "Rata-Rata : " << (nilaiSiswa[i][0] + nilaiSiswa[i][1] + nilaiSiswa[i][2]) / 3.0 << endl;
      cout<<endl;
   }
   return 0;
}

