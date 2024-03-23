#include <iostream>
#include <string>
using namespace std;
struct DataPanen {
    string jenisPadi;
    double luasLahan;
    double beratPadi;

    DataPanen(string jenis, double luas, double berat)
        : jenisPadi(jenis), luasLahan(luas), beratPadi(berat) {}
};

struct Node {
    DataPanen data;
    Node* next;
    Node* prev;

    Node(DataPanen value) : data(value), next(nullptr), prev(nullptr) {}
};

class HarvestLinkedList {
private:
    Node* head;

public:
    HarvestLinkedList() : head(nullptr) {}

    void insertKiri(DataPanen newData) {
        Node* newNode = new Node(newData);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertKanan(DataPanen newData) {
        Node* newNode = new Node(newData);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
        }
    }

    void insertTengah(string jenisToInsertAfter, DataPanen newData) {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* current = head;
        while (current->data.jenisPadi != jenisToInsertAfter && current->next != head) {
            current = current->next;
        }

        if (current->data.jenisPadi == jenisToInsertAfter) {
            Node* newNode = new Node(newData);
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
        } else {
            cout << "Data dengan jenis padi '" << jenisToInsertAfter << "' tidak ditemukan." << endl;
        }
    }

    void display() {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* current = head;
        do {
            cout << "Jenis Padi: " << current->data.jenisPadi << ", Luas Lahan: " << current->data.luasLahan
                      << ", Berat Padi: " << current->data.beratPadi << endl;
            current = current->next;
        } while (current != head);
    }
};

int main() {
    HarvestLinkedList panenList;

    DataPanen data1("Padi A", 10.5, 30.0);
    DataPanen data2("Padi B", 15.0, 45.5);
    DataPanen data3("Padi C", 12.5, 35.8);

    panenList.insertKiri(data1);
    panenList.insertKanan(data2);
    panenList.insertKiri(data3);

    cout << "Linked List setelah Insert Kiri dan Kanan:" << endl;
    panenList.display();
    DataPanen data4("Padi D", 18.5, 55.2);
    panenList.insertTengah("Padi B", data4);
    cout << endl;

    cout << "Linked List setelah Insert Tengah:" << endl;
    panenList.display();

    return 0;
}
