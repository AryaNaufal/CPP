#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream outputFile;
    ifstream inputFile;
    int data;

    outputFile.open("Data.txt", ios::binary | ios::out);

    if (!outputFile) {
        cout << "Gagal membuka file untuk merekam." << endl;
        return 1;
    }

    cout << "Masukkan data (999 untuk berhenti): ";

    while (true) {
        cin >> data;

        if (data == 999) {
            break;
        }

        outputFile.write(reinterpret_cast<char*>(&data), sizeof(int));
    }

    outputFile.close();

    inputFile.open("Data.txt", ios::binary | ios::in);

    if (!inputFile) {
        cout << "Gagal membuka file untuk membaca." << endl;
        return 1;
    }

    cout << "Data yang dibaca dari file adalah: ";

    while (inputFile.read(reinterpret_cast<char*>(&data), sizeof(int))) {
        cout << data << " ";
    }

    cout << endl;

    inputFile.close();

    return 0;
}
