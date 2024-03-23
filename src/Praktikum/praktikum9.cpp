// Buatlah program pencarian beruntun yang didalamnya terdapat pointer, array, dan fungsi (Diusahakan lebih dari 3 fungsi)
#include <iostream>
using namespace std;

// Fungsi pencarian beruntun
int linearSearch(int *arr, int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (*arr == target)
    {
      return i; // Indeks ditemukan
    }
    arr++;
  }
  return -1; // Tidak ditemukan
}

// Fungsi untuk mencetak array
void printArray(int *arr, int n)
{
  cout << "Isi Array: ";
  for (int i = 0; i < n; i++)
  {
    cout << *arr << " ";
    arr++;
  }
  cout << endl;
}

// Fungsi utama
int main()
{
  int n, target;
  cout << "Masukkan jumlah array: ";
  cin >> n;

  int arr[n];

  cout << "Masukkan nilai array:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Masukkan nilai yang ingin dicari: ";
  cin >> target;

  printArray(arr, n); // Cetak isi array

  int result = linearSearch(arr, n, target);

  if (result != -1)
  {
    cout << "Elemen " << target << " ditemukan pada indeks " << result << endl;
  }
  else
  {
    cout << "Elemen " << target << " tidak ditemukan dalam array." << endl;
  }

  return 0;
}
