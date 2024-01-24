#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;


void Mahasiswa()
{
  cout << "---Penghitungan Mata Kuliah---";
}

long int perhitungan(int nilai1, int nilai2)
{
    int hitung;
    hitung = nilai1 + nilai2 / 2;
    
}

int main()
{
    string nama;
    int npm;
    double nilai1, nilai2;
cout << "==== Data Diri Mahasiswa ====" << endl;
cout << "   Nama        : ";
cin  >> nama;
cout << "   NPM         : ";
cin  >> npm;
cout << "   Nilai Tugas Pertama : ";
cin  >> nilai1;
cout << "   Nilai Tugas Kedua   : ";
cin  >> nilai2;

Mahasiswa();
cout << "\n==== Data Diri Mahasiswa ====" << endl;
cout << nama << endl;
cout << npm << endl;
cout << perhitungan(nilai1,nilai2) << endl;
 

return 0;
}