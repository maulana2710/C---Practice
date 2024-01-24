#include <iostream>
using namespace std;
int main()
{
const int bulan = 13;
int hari[bulan] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int hitung;
    for (hitung = 1; hitung < bulan; hitung++)
    {
        cout << "Bulan " << hitung << " mempunyai jumlah " ;
        cout << hari[hitung] << " hari.\n";

    }

return 0;
}