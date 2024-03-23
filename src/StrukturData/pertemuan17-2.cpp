#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node*& top, int value) {
    Node* newNode = new Node{value, nullptr};
    newNode->next = top;
    top = newNode;
}

int pop(Node*& top) {
    if (top == nullptr) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }

    Node* temp = top;
    int poppedValue = temp->data;
    top = temp->next;
    delete temp;
    return poppedValue;
}

bool isEmpty(Node* top) {
    return top == nullptr;
}

void decimalToBinary(int decimalNumber) {
    Node* top = nullptr;

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        push(top, remainder);
        decimalNumber /= 2;
    }

    cout << "Hasil konversi ke biner: ";
    while (!isEmpty(top)) {
        cout << pop(top);
    }
    cout << endl;
}

int main() {
    int decimalNumber;

    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;

    decimalToBinary(decimalNumber);

    return 0;
}
