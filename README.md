# Praktikum1

## Latihan 1: Menghitung luas persegi panjang

*Alur Algoritma*
1. Deklarasikan variable `int p,l` sebagai variabel input
2. Masukkan input ke dalam variabel
3. Tunjukkan hasil perkalian dari kedua variabel

*Berikut code lengkapnya*
```
#include <iostream>
using namespace std;

int main()
{
  int p, l;
  
  cout << "Program menghitung luas persegi panjang"
  cout << "Masukkan p: "
  cin >> p
  cout << "Masukkan l: "
  cin >> l
  
  cout << "Luas = "p*l
  return 0;
}
```

## Latihan 2: Menentukan Angka Ganjil atau Genap

*Alur Algoritma*
1. Deklarasikan variabel `int n`
2. Tentukan apakah `n` habis dibagi dua dengan `n % 2 == 0`
3. Bila `n` habis dibagi 2, maka tunjukkan bahwa `n` adalah bilangan genap, selain itu berarti `n` adalah bilangan ganjil

*Berikut code lengkapnya*
```
#include <iostream>
using namespace std;

int main()
{
  int n;
  
  cout << "Masukkan angka: ";
  cin >> n;
  
  if ( n % 2 == 0)
    cout << n << " adalah angka genap";
  else
    cout << n << " adalah angka ganjil";
  
  return 0;
}
```

## Latihan 3: Menentukan Angka yang Lebih Besar

*Alur Algoritma*
1. Deklarasi integer `int n1, n2`
2. Masukkan angka pertama atau `n1` dan angka kedua atau `n2`
3. Bila `n1` lebih besar dari `n2` maka `cout << n1 << " > " << n2`
4. Bila `n1` lebih kecil dari `n2` maka `cout << n1 << " < " << n2`
5. Bila `n1` sama dengan `n2` maka `cout << n1 << " = " << n2`

*Berikut code lengkapnya*
```
#include <iostream>
using namespace std;

int main()
{
  int n1, n2;
  
  cout << "Program menentukan angka mana yang lebih besar"
  cout << "Masukkan bilangan pertama: "
  cin >> n1
  cout << "Masukkan bilangan kedua: "
  cin >> n2
  
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
```