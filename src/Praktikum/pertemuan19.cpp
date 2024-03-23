#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream outputFile("data.txt");

  outputFile << "Nama: Arya Naufal" << endl;
  outputFile << "Jurusan: Informatika" << endl;

  outputFile.close();

  ifstream inputFile("data.txt");

  if (inputFile.is_open()) {
    cout << "Isi file secara berurutan:" << endl;

    string line;

    while (getline(inputFile, line)) {
      cout << line << endl;
    }

    inputFile.close();

  } else {
    cerr << "Gagal membuka file untuk dibaca." << endl;
  }

  return 0;
}
