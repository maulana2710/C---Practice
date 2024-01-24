#include <iostream>
using namespace std;
int main()
{
char pilihan;
cout << "Masukan A, B, atau C : ";
cin >> pilihan;
switch(pilihan)
{
case 'A': cout << "Anda memilih A.\n";
break;
case 'B': cout << "Anda memilih B.\n";
break;
case 'C': cout << "Anda memilih C.\n";
break;
default: cout << "Anda tidak memilih A, B, atau C!\n";
}
return 0;
}
