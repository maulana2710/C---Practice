#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream anggota;
anggota.open("list.txt");/*Deklarasi nama file list.txt*/

cout << "Berhasil membuat file anggota\n";
// Write four names to the file.
anggota << ("Melody\n"); /*tuliskan nama Melody*/
anggota << ("Brad\n"); /*tuliskan nama Brad*/
anggota << ("Joe Han\n"); /*tuliskan nama Joe Han*/
anggota << ("Travis Pastrana\n"); /*tuliskan nama Travis Pastrana*/
anggota << ("Dida\n"); /*tuliskan nama Dida*/

 //Close the file
anggota.close();

return 0;
}