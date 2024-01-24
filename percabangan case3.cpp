#include <iostream>
using namespace std;
int main()
{
char KelasMakanan;
cout << "Makanan hewan peliharaan kami tersedia dalam tiga tingkatan :\n";
cout << "A, B, and C. Anda ingin melihat harga yang mana?";
cin >> KelasMakanan;
switch (KelasMakanan)
{
case 'a':
case 'A': cout << "30.000 per kilogram.\n";
break;
case 'b':
case 'B': cout << "20.000 per kilogram.\n";
break;
case 'c':
case 'C': cout << "15.000 per kilogram.\n";
break;
default: cout << "Itu adalah pilihan yang tidak valid.\n";
}
return 0;
}
