#include <iostream>
using namespace std;
void pertama()//Buat fungsi displayMessage tanpa mengembalikan suatu nilai
{
cout<<"Hello dari fungsi displayMessage\n";
}
int main()//Buat fungsi main dengan mengembalikan suatu nilai
{
cout<<"Hello dari fungsi main\n";
pertama();// memanggil fungsi petama
cout << "Kembali ke fungsi main lagi\n";
return 0;
}