#include <iostream>
using namespace std;

int main()
{
  int n1, n2;

  cout << "[Program menentukan angka mana yang lebih besar]";
  cout << "Masukkan bilangan pertama: ";
  cin >> n1;
  cout << "Masukkan bilangan kedua: ";
  cin >> n2;

  if(n1 > n2)
  {
    cout << n1 << " > " << n2;
  }

  if(n1 < n2)
  {
    cout << n1 << " < " << n2;
  }

  if(n1 == n2)
  {
    cout << n1 << " = " << n2;
  }

  return 0;
}
