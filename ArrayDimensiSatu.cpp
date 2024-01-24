#include <iostream>
using namespace std;
int main()
{
const int nomor_pegawai = 6;
int jam[nomor_pegawai];
cout << "Masukan jam kerja " << nomor_pegawai << " pegawai : "; //jam kerja setiap pegawai
cin >> jam[0];
cin >> jam[1];
cin >> jam[2];
cin >> jam[3];
cin >> jam[4];
cin >> jam[5];
cout << " " << jam[0];
cout << " " << jam[1];
cout << " " << jam[2];
cout << " " << jam[3];
cout << " " << jam[4];
cout << " " << jam[5] << endl;
return 0;
}
