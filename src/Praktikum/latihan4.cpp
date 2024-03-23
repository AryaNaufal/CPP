#include <iostream>
#include <cmath>

using namespace std;

// Fungsi untuk menghitung nilai absolut (abs)
double absolute(double x) {
    return fabs(x);
}

// Fungsi untuk mengubah angka menjadi negatif
double negatif(double x) {
    return -x;
}

// Fungsi untuk menghitung pangkat dua
double pangkat_dua(double x) {
    return x * x;
}

int main() {
    double angka;

    // Menentukan angka
    cout << "Masukkan angka: ";
    cin >> angka;

    // Menggunakan fungsi absolute
    double hasil_absolute = absolute(angka);
    cout << "Nilai absolut: " << hasil_absolute << endl;

    // Menggunakan fungsi minus
    double hasil_minus = negatif(angka);
    cout << "Nilai minus: " << hasil_minus << endl;

    // Menggunakan fungsi pangkat dua
    double hasil_pangkat_dua = pangkat_dua(angka);
    cout << "Nilai pangkat dua: " << hasil_pangkat_dua << endl;

    return 0;
}
