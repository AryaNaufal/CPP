#include <iostream>

using namespace std;

// Variabel global
int globalVariable = 0;

// Fungsi rekursi dengan variabel lokal
int rekursiLokal(int n) {
    // Variabel lokal
    int lokalVariable = 1;

    if (n > 0) {
        return n * rekursiLokal(n - 1);
    } else {
        return 1;
    }
}

// Fungsi rekursi dengan variabel global
int rekursiGlobal(int n) {
    if (n > 0) {
        globalVariable++;
        return n * rekursiGlobal(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int angka = 5;
    cout << "Hasil rekursi lokal: " << rekursiLokal(angka) << endl;
    cout << "Hasil rekursi global: " << rekursiGlobal(angka) << endl;
    cout << "Nilai Variable global setelah melewati rekursi global: " << globalVariable << endl;

    return 0;
}
