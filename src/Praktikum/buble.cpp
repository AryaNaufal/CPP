#include <iostream>

using namespace std;

void bubbleSortMin(int arr[], int x)
{
  for (int i = 0; i < x - 1; i++)
  {
    for (int j = 0; j < x - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < x; i++)
  {
    cout << arr[i] << " ";
  }
}

void bubbleSortMax(int arr[], int x)
{
  for (int i = 0; i < x - 1; i++)
  {
    for (int j = 0; j < x - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < x; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  // List Array
  int a[] = {30, 20, 10, 50, 40};
  int X = sizeof(a) / sizeof(a[0]);

  // Cetak Array Sebelum di sorting
  cout << "List Array Sebelum di Sorting: ";
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  // Sorting Array
  cout << "Bubble sort min to max (Ascending): ";
  bubbleSortMin(a, X);
  cout << endl;

  cout << "Bubble sort max to min (Descending): ";
  bubbleSortMax(a, X);
  cout << endl;

  // Menampilkan Nilai minimal dan maksimal array
  cout << "Nilai Min: " << a[sizeof(a[0])] << endl;
  cout << "Nilai Max: " << a[0] << endl;
}
