#include <iostream>
using namespace std;

class BangunRuang { //membuat sebuah base class bernama BangunRuang
    protected:
    int panjang,lebar,tinggi;// mendeklarasikan variabel panjang, lebar, tinggi bertipe integer
    void setValue(int a, int b, int c){ // membuat fungsi setValue bertipe data void 
        panjang   = a;
        lebar  = b;
        tinggi = c;
    }
};
// derived class 
......... // membuat derived class yang bernama kubus
    ......... { // mendeklarasikan base class BangunRuang dengan tipe akses public
    public:
    int getValue(){
        .........// membuat return value mengalikan panjang sebanyak 3 kali 
    }
};
// derived class 
class balok: public BangunRuang {
    public:
    int getValue(){
        ......... // membuat return value mengalikan panjang lebar dan tinggi
    }
};
// program utama
int main () {
    // Inisiasi Object
    kubus x;
	balok y; 
    // Inisiasi Nilai
    x.setValue(4,4,4);
	y.setValue(5,7,15);
    // Mendapatkan Nilai Kembalian
    cout <<"Volume kubus adalah " << x.getValue() << endl;
	cout <<"Volume balok adalah " << y.getValue() << endl;
    return 0;
}