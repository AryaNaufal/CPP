#include <iostream>

using namespace std;

struct Mahasiswa {
  char nama[10];
  char nim[12];
  int usia;
  char alamat[50];
  char gender[10];
};

int main() {
  Mahasiswa mhs;

  cout<<"Masukan NAMA: ";
  cin>>mhs.nama;
  cout<<"Masukan NIM: ";
  cin>>mhs.nim;
  cout<<"Masukan USIA: ";
  cin>>mhs.usia;
  cout<<"Masukan ALAMAT: ";
  cin>>mhs.alamat;
  cout<<"Masukan GENDER: ";
  cin>>mhs.gender;

  cout<<"================================================="<<endl;

  cout<<"Nama: "<<mhs.nama<<endl;
  cout<<"Nim: "<<mhs.nim<<endl;
  cout<<"Usia: "<<mhs.usia<<endl;
  cout<<"Alamat: "<<mhs.alamat<<endl;
  cout<<"Gender: "<<mhs.gender<<endl;

  return 0;
}