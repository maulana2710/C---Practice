#include <iostream>
using namespace std;

void pertama()//Buat fungsi pertama tanpa mengembalikan nilai
{
    cout << "Saya sekarang di dalam fungsi pertama.\n";
}

void kedua()
{
    cout << "Saya sekarang di dalam fungsi kedua.\n";
}

int main()//Buat fungsi main dengan mengembalikan nilai
{
    cout << "Saya mulai dalam fungsi main.\n";
    pertama();//panggil fungsi pertama
    kedua();//panggil fungsi kedua
    cout << "Kembali ke fungsi main lagi.\n";

    return 0;
}