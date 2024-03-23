#include <iostream>
using namespace std;

void selectionSort(int arr[], int x)
{
  int min_index;
  for (int i = 0; i < x - 1; i++)
  {
    min_index = i;
    for (int j = i + 1; j < x; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
        swap(arr[min_index], arr[i]);
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
  for (int i = 0; i < X; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  // Sorting Array
  cout << "Selection sort min to max (Ascending): ";
  selectionSort(a, X);
  cout << endl;
}