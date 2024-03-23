#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 1024

void recordData(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Gagal membuka file");
        exit(EXIT_FAILURE);
    }

    char data[] = "Data: [Nama: arya, jurusan: informatika]";

    size_t dataSize = sizeof(data);
    size_t blockCount = dataSize / BLOCK_SIZE;
    size_t remainingBytes = dataSize % BLOCK_SIZE;

    for (size_t i = 0; i < blockCount; ++i) {
        fwrite(data + i * BLOCK_SIZE, sizeof(char), BLOCK_SIZE, file);
    }

    if (remainingBytes > 0) {
        fwrite(data + blockCount * BLOCK_SIZE, sizeof(char), remainingBytes, file);
    }

    fclose(file);

    printf("Data berhasil direkam ke dalam file.\n");
}

void readData(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Gagal membuka file");
        exit(EXIT_FAILURE);
    }

    char buffer[BLOCK_SIZE];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, sizeof(char), BLOCK_SIZE, file)) > 0) {
        fwrite(buffer, sizeof(char), bytesRead, stdout);
    }

    fclose(file);

    printf("\nData berhasil dibaca dari file.\n");
}

int main() {
    const char *filename = "data.bin";

    recordData(filename);

    readData(filename);

    return 0;
}
