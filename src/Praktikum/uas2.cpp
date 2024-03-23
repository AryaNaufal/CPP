#include<iostream>
using namespace std;

// Sequential Search
int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

// Interpolation Search
int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        int pos = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (arr[pos] == key) {
            return pos;
        }

        if (arr[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Masukkan nilai yang dicari: ";
    cin >> key;

    // Sequential Search
    int seqResult = sequentialSearch(arr, n, key);
    if (seqResult != -1) {
        cout << "Sequential Search: Nilai " << key << " ditemukan di indeks " << seqResult << endl;
    } else {
        cout << "Sequential Search: Nilai " << key << " tidak ditemukan." << endl;
    }

    // Binary Search
    int binResult = binarySearch(arr, 0, n - 1, key);
    if (binResult != -1) {
        cout << "Binary Search: Nilai " << key << " ditemukan di indeks " << binResult << endl;
    } else {
        cout << "Binary Search: Nilai " << key << " tidak ditemukan." << endl;
    }

    // Interpolation Search
    int interpResult = interpolationSearch(arr, n, key);
    if (interpResult != -1) {
        cout << "Interpolation Search: Nilai " << key << " ditemukan di indeks " << interpResult << endl;
    } else {
        cout << "Interpolation Search: Nilai " << key << " tidak ditemukan." << endl;
    }

    return 0;
}
