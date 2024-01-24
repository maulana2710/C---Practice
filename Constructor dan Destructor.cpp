#include <iostream>
#include<string>
using namespace std;

// Mendeklarasikan class siswa
class siswa{
public : //set hak akses
    int nim; //deklarasi variabel bertipe integer dengan nama nim
    string nama; //deklarasi variabel bertipe string dengan nama nama

    siswa(int iNim, string iNama){
        nim=iNim;
        nama=iNama;
    }

    void cetakData(){
        cout<<"Nim  = "<<nim<<endl;
        cout<<"Nama = "<<nama<<endl;
        cout<<endl;
    }
};

int main(){
    siswa Ruby(123456, "Ruby");
    siswa Rose{234567, "Rose"};
    siswa Razzel={345678, "Razzel"};

    Ruby.cetakData();
    Rose.cetakData();
    Razzel.cetakData();
    return 0;
}
