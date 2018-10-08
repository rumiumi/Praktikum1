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
