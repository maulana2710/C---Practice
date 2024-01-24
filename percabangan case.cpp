#include <iostream>
using namespace std;
int main()
{
int model;
cout << "TV Ikana mempunyai 3 model : 100, 200, 300\n";
cout << "Model mana yang anda pilih? ";
cin  >> model;
cout << "Model tersebut memiliki fitur-fitur berikut :\n";
switch(model)
{
case 300: cout << "Gambar lebih jernih.\n";
case 200: cout << "Suara stereo.\n";
case 100: cout << "Kontrol jarak jauh.\n";
break;
default: cout << "Anda hanya bisa memilih model 100, 200, atau 300.\n";
}
return 0;
}