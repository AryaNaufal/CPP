#include <iostream>
#define jmlDat 8

using namespace std;

void BinSearch(int Data[], int n, int x, int *idx);

int main()
{

  int Data[jmlDat] = {81, 76, 21, 18, 16, 13, 10, 7}, x, idx, i;

  cout << "Element array: ";

  for (i = 0; i < jmlDat; i++)
  {

    cout << Data[i];
    cout << endl;
    cout << "Masukan data yang akan dicari?: ";
    cin >> x;
    BinSearch(Data, jmlDat, x, &idx);

    if (idx != -1)
    {
      cout << "Data yang dicari beada pada indeks: " << idx << endl;
    }
    else
    {
      cout << "Data yang dicari tidak ada dalam array" << endl;
    }
  }
}

void BinSearch(int Data[], int n, int x, int *idx)
{

  bool ketemu = false;
  int top = n - 1, bottom = 0, mid;

  while (bottom <= top && !ketemu)
  {

    mid = (top + bottom) / 2;

    if (Data[mid] == x)
    {
      ketemu = true;
    }
    else if (Data[mid] < x)
    {
      top = mid - 1;
    }
    else
    {
      bottom = mid + 1;
    }
  }

  if (ketemu)
  {
    *idx = mid;
  }
  else
  {
    *idx = -1;
  }
}
