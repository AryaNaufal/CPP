#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    return stack[top--];
}

bool isEmpty() {
    return top == -1;
}

void decimalToBinary(int decimalNumber) {
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        push(remainder);
        decimalNumber /= 2;
    }

    cout << "Hasil konversi ke biner: ";
    while (!isEmpty()) {
        cout << pop();
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
