#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int nomorMenu;
    struct Queue* next;
};

struct Queue* D = NULL;  // Front
struct Queue* B = NULL;  // Rear

// Fungsi untuk inisialisasi antrian
void initializeQueue() {
    D = B = NULL;
}

// Fungsi untuk menambahkan pesanan ke antrian
void enqueue(int nomorMenu) {
    struct Queue* newNode = (struct Queue*)malloc(sizeof(struct Queue));
    newNode->nomorMenu = nomorMenu;
    newNode->next = NULL;

    if (B == NULL) {
        D = B = newNode;  // Antrian kosong
    } else {
        B->next = newNode;
        B = newNode;
    }
}

// Fungsi untuk menghapus pesanan dari antrian
void dequeue() {
    if (D == NULL) {
        printf("Antrian kosong\n");
        return;
    }

    struct Queue* temp = D;
    D = D->next;

    free(temp);

    if (D == NULL) {
        B = NULL;  // Antrian menjadi kosong setelah penghapusan
    }
}

// Fungsi untuk menampilkan antrian
void displayQueue() {
    struct Queue* current = D;

    if (D == NULL) {
        printf("Antrian kosong\n");
        return;
    }

    while (current != NULL) {
        printf("[nomorMenu: %d] -> ", current->nomorMenu);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    initializeQueue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    displayQueue();
}