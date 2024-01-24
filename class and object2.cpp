#include <iostream>
#include <string.h> // Tuliskan header file untuk tipe data string
using namespace std;

class biodata //Deklarasikan nama class dengan nama biodata
{
private : //Deklarasikan tipe akses private
   string nama; // Deklarasikan tipe data string dengan variabel nama
   int umur; //Deklarasikan tipe data integer dengan variabel umur
public : 
    void setNama(string); //Deklarasikan function setter untuk variabel nama
    void setUmur(int); // Deklarasikan function setter untuk variabel umur
    string getNama() const; //Deklarasikan function getter untuk variabel nama
    int getUmur() const; //Deklarasikan function getter untuk variabel umur
};

/*Definisikan member function yang ada di tipe data public*/
void biodata::setNama(string nm)
{
    nama = nm;
}
void biodata::setUmur(int umr)
{
    umur = umr;
}
string biodata::getNama() const
{
    return nama;
}
int biodata::getUmur() const
{
    return umur;
}

int main()
{
    biodata variabeldiri; //Instansiasi Class biodata dengan nama variabel diri
    string namasaya; //Deklarasikan tipe data string dengan nama variabel namasaya
    int umursaya; //Deklarasikan tipe data integer dengan nama variabel umursaya 

    cout << "Tuliskan namamu : \n";
    cin >> namasaya; 
    cout << "Berapa umurmu : \n";
    cin >> umursaya;

    /*mengubah nilai setNama dan setPanjang dengan object diri*/
    variabeldiri.setNama(namasaya);
    variabeldiri.setUmur(umursaya);

    cout << "Biodata diri " << endl;
    cout << "Nama : " <<variabeldiri.getNama() << endl; //Mencetak nilai variabel nama dengan function getter 
    cout << "Umur : " <<variabeldiri.getUmur() << endl; //Mencetak nilai variabel umur dengan function getter
    return 0;
}
