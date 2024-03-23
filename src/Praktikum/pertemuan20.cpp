#include <iostream>

#include <fstream>

#include <string>



void recordData() {

    std::ofstream file("data.txt", std::ios::binary);



    std::string input;

    while (true) {

        std::cout << "Masukkan data untuk direkam (Ketik 'exit' untuk berhenti):\n";

        std::getline(std::cin, input);



        if (input == "exit") {

            break;

        }



        file.write(input.c_str(), input.size());

        file.put('\0');

    }



    std::cout << "Data berhasil direkam ke dalam file 'data.txt'.\n";

}



void readData() {

    std::ifstream file("data.txt", std::ios::binary);



    char buffer[256];

    std::cout << "Membaca dan menampilkan data dari file 'data.txt':\n";

    while (file.read(buffer, sizeof(buffer))) {

        std::cout << "Baca data: " << buffer << "\n";

    }

}



int main() {

    recordData();

    readData();



    return 0;

}

