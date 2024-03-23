#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class CircularDoublyLinkedList {
private:
    Node* head;

public:
    CircularDoublyLinkedList() : head(nullptr) {}
     void insertKiri(int value) {
        Node* newNode = new Node(value);
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

    void insertKanan(int value) {
        Node* newNode = new Node(value);
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

    void insertTengah(int valueToInsertAfter, int newValue) {
        Node* newNode = new Node(newValue);
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* current = head;
        while (current->data != valueToInsertAfter && current->next != head) {
            current = current->next;
        }

        if (current->data == valueToInsertAfter) {
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
        } else {
            cout << "Elemen tidak ditemukan." << endl;
        }
    }

    void deleteKiri() {
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

    void deleteKanan() {
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

    void deleteTengah(int valueToDelete) {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* current = head;
        while (current->data != valueToDelete && current->next != head) {
            current = current->next;
        }

        if (current->data == valueToDelete) {
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
        } else {
            cout << "Elemen tidak ditemukan." << endl;
        }
    }

    void display() {
        if (!head) {
            cout << "Linked list kosong." << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }
};

int main() {
    CircularDoublyLinkedList myList;

    myList.deleteKiri(); // Hapus kiri pada linked list kosong
    myList.insertKiri(10);
    myList.insertKanan(20);
    myList.insertKiri(5);
    myList.insertKanan(30);

    cout << "Linked List sebelum Delete:" << endl;
    myList.display();

    myList.deleteKiri(); // Hapus kiri
    myList.deleteKanan(); // Hapus kanan

    cout << "Linked List setelah Delete Kiri dan Kanan:" << endl;
    myList.display();

    myList.deleteTengah(20); // Hapus tengah berdasarkan data

    cout << "Linked List setelah Delete Tengah:" << endl;
    myList.display();

    return 0;
}
