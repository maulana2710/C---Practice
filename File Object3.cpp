#include <iostream>
#include <fstream> /*Deklarasi header fstream*/
using namespace std;
int main()
{
ofstream outputFile; /*Deklarasi nama file object dan tipe data*/
outputFile.open("UTS.txt"); /*Buat atau buka file yang bernama UTS.txt* dan deklarasikan nama file object*/

cout << "file berhasil dibuat\n";
outputFile << "Bach\n";
outputFile.close();/*Tutup file */
return 0;
}
