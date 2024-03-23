// Tulislah algoritma dan program c++ untuk pecarian metode bagi dua dengan array terurut naik

#include <iostream>

using namespace std;
// Fungsi untuk mencari elemen dalam array menggunakan metode bagi dua
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Jika elemen yang dicari adalah elemen tengah
        if (arr[mid] == target) {
            return mid;
        }

        // Jika elemen yang dicari lebih kecil, cari di setengah kiri
        if (arr[mid] > target) {
            right = mid - 1;
        }

        // Jika elemen yang dicari lebih besar, cari di setengah kanan
        else {
            left = mid + 1;
        }
    }

    // Jika elemen tidak ditemukan
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Elemen " << target << " ditemukan pada indeks " << result << endl;
    } else {
        cout << "Elemen " << target << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
