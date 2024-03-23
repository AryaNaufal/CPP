#include <iostream>

using namespace std;

int main()
{
  int angka1;
  int angka2;
  char operators;

  int hasil;

  cout << "Masukan angka 1: ";
  cin >> angka1;

  cout << "Masukan angka 2: ";
  cin >> angka2;

  cout << "Select operator (+, -, *, /): ";
  cin >> operators;

  switch (operators)
  {
  case '+':
    hasil = angka1 + angka2;
    break;
  case '-':
    hasil = angka1 - angka2;
    break;
  case '*':
    hasil = angka1 * angka2;
    break;
  case '/':
    hasil = angka1 / angka2;

  default:
    break;
  }

  cout << hasil;

  return 0;
}