#include <iostream>

using namespace std;

struct Mahasiswa {
   string nama;
   int umur;
   string jurusan;
};

int main() {
   int jumlahMahasiswa;

   cout<<"Masukan jumlah mahasiswa: ";
   cin>>jumlahMahasiswa;
   cout<<endl;

   Mahasiswa mahasiswa[jumlahMahasiswa];

   for (int i = 0; i < jumlahMahasiswa; i++)
   {
      cout<<"Data Mahasiswa ke - "<<i+1<<":"<<endl;
      cout<<"Nama: ";
      cin>>mahasiswa[i].nama;
      getline(std::cin, mahasiswa[i].nama);

      cout<<"Umur: ";
      cin>>mahasiswa[i].umur;

      cout<<"Jurusan: ";
      cin>>mahasiswa[i].jurusan;
      getline(std::cin, mahasiswa[i].jurusan);

      cout<<endl;
   }
   
   
   return 0;
}
