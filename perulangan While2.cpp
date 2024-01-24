#include <iostream>
using namespace std;

int main()
{
    /*deklarasi variabel dalam 1 baris dengan ketentuan
    - inisialisasi variabel bertipe integer dengan nama j bernilai 1
    - deklarasi variabel bertipe integer dengan nama m dan d*/
    int j = 1, m, d;

    /*melengkapi perulangan do-while*/
    while (j <= 10)
    {
        /*menghitung detik*/
        d = d + 3600;
        /*menghitung menit*/
        m = m + 60;

        cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;

        /*iterasi variabel dimana j bertambah 1 dengan penulisan secara postfix*/
        j = j + 1;

    } //batas akhir dimana j kurang dari sama dengan 10
}