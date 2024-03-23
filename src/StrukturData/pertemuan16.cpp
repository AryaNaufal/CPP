#include <iostream>
using namespace std;

// Fungsi untuk melakukan Shell Sort
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi utama
int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    shellSort(arr, n);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}
