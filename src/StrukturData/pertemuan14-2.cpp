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

    void deleteLeft() {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* temp = head;
        if (head->next == head) {
            delete temp;
            head = nullptr;
        } else {
            head->next->prev = head->prev;
            head->prev->next = head->next;
            head = head->next;
            delete temp;
        }
    }

    void deleteRight() {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* temp = head->prev;
        if (head->next == head) {
            delete temp;
            head = nullptr;
        } else {
            head->prev = temp->prev;
            temp->prev->next = head;
            delete temp;
        }
    }

    void deleteMiddle(string jenisToDelete) {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* current = head;
        while (current->data.jenisPadi != jenisToDelete && current->next != head) {
            current = current->next;
        }

        if (current->data.jenisPadi == jenisToDelete) {
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
        } else {
            cout << "Data dengan jenis padi '" << jenisToDelete << "' tidak ditemukan." << endl;
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

    void insertLeft(DataPanen newData) {
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

    void insertRight(DataPanen newData) {
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
};

int main() {
    HarvestLinkedList panenList;

    DataPanen data1("Padi A", 10.5, 30.0);
    DataPanen data2("Padi B", 15.0, 45.5);
    DataPanen data3("Padi C", 12.5, 35.8);

    panenList.insertLeft(data1);
    panenList.insertRight(data2);
    panenList.insertLeft(data3);

    cout << "Linked List sebelum Delete:" << endl;
    panenList.display();
    panenList.deleteLeft();
    panenList.deleteRight();
    cout << endl;

    cout << "Linked List setelah Delete Kiri dan Kanan:" << endl;
    panenList.display();
    panenList.deleteMiddle("Padi B");
    cout << endl;

    cout << "Linked List setelah Delete Tengah:" << endl;
    panenList.display();

    return 0;
}
