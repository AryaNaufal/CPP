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

    myList.insertKiri(10);
    myList.insertKanan(20);
    myList.insertKiri(5);
    myList.insertKanan(30);

    cout << "Linked List setelah Insert Kiri dan Kanan:" << endl;
    myList.display();

    myList.insertTengah(20, 25);

    cout << "Linked List setelah Insert Tengah:" << endl;
    myList.display();

    return 0;
}
