#include <iostream>
using namespace std;

long int pangkatrekursif(int x,int y);//membuat fungsi pangkat rekursif bertipe long int dengan parameter integer x dan y

int main()
{
int x, y;
    x = 8;
    y = 3;//deklarasi intger dengan nama variabel x bernilai 8 dan y bernilai 3

	cout<<"FUNGSI REKURSIF UNTUK MENGHITUNG PANGKAT"<<endl;

	cout<<x<<" Dipangkatkan "<<y<<" = "<<pangkatrekursif(x,y)<<endl;
}


long int pangkatrekursif(int x,int y)//membuat fungsi rekursif
{    
    if (y == 0)//percabangan if dengan kondisi jika y sama dengan 0
        return 1 ;
    else
        return x * pangkatrekursif(x,y-1);
}