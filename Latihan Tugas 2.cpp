#include <iostream>
#include <conio.h>
using namespace std;



class RumusPersegiPanjang 
{
 private :
 	  double lebar;   
	  double panjang; 
 public :             
    void setLebar(double );    
	  void setPanjang(double);   
	  double getLebar() const;  
	  double getPanjang() const; 
	  double getTotal() const;    
};

void RumusPersegiPanjang::setLebar(double w) 
{	lebar = w; }
void RumusPersegiPanjang::setPanjang (double len)
{	panjang = len; }
double RumusPersegiPanjang::getLebar() const
{ return lebar; }
double RumusPersegiPanjang::getPanjang() const
{ return panjang; }
double RumusPersegiPanjang::getTotal() const
{ return lebar*panjang; }

class RumusSegitiga 
{
 private :
   	double alas;   
	  double tinggi; 
 public :             
    void setAlas(double );    
 	  void setTinggi(double);   
 	  double getAlas() const;  
	  double getTinggi() const; 
	  double getTotal() const;    
};

void RumusSegitiga::setAlas(double w) 
{	alas = w; }
void RumusSegitiga::setTinggi (double len)
{	tinggi = len; }
double RumusSegitiga::getAlas() const
{ return alas; }
double RumusSegitiga::getTinggi() const
{ return tinggi; }
double RumusSegitiga::getTotal() const
{ return alas*tinggi/2; }

class RumusLingkaran 
{
 private :
   	double jari_jari;   
	  
 public :             
    void setJari_jari(double );    
 	  double getJari_jari() const;   
	  double getTotal() const;    
};

void RumusLingkaran::setJari_jari(double w) 
{	jari_jari = w; }
double RumusLingkaran::getJari_jari() const
{ return jari_jari; }
double RumusLingkaran::getTotal() const
{ return 2*3.14*jari_jari; }

int main()
{
    
    char pilihan;
    double PerPan, PerLeb;
    double ala, tin;
    double jar;
    cout << "Pilih Salah Satu Dari 3 Pilihan Dibawah" << endl;
    cout << "1. Rumus Persegi Panjang" << endl;
    cout << "2. Rumus Segitiga" << endl;
    cout << "3. Rumus Lingkaran" << endl;
    cin >> pilihan;
    switch (pilihan)
    {
    case '1':
       RumusPersegiPanjang q1;
        cout << "==== Anda memilih Rumus Persegi Panjang ====" << endl;
        cout << "Berapa lebar nya? ";
        cin >> PerLeb;
        cout << "Berapa panjang nya? ";
        cin >> PerPan;

       q1.setLebar(PerLeb);
       q1.setPanjang(PerPan);
         cout << "-------------------" << endl;
         cout << "Persegi Panjang:\n";
         cout << "Lebar   : " << q1.getLebar() << endl; 
         cout << "Panjang : " << q1.getPanjang() << endl;
         cout << "Total    :"  << q1.getTotal() << endl;
      break;
    
    case '2':
       RumusSegitiga q2;
        cout << "==== Anda memilih Rumus Segitiga ====" << endl;
        cout << "Berapa alas nya? ";
        cin >> ala;
        cout << "Berapa tinggi nya? ";
        cin >> tin;

       q2.setAlas(ala);
       q2.setTinggi(tin);
         cout << "-------------------" << endl;
         cout << "Persegi Segitiga:\n";
         cout << "Alas   : " << q2.getAlas() << endl; 
         cout << "Tinggi : " << q2.getTinggi() << endl;
         cout << "Total  :"  << q2.getTotal() << endl;
      break;

    case '3':
       RumusLingkaran q3;
        cout << "==== Anda memilih Rumus Lingkaran ====" << endl;
        cout << "Berapa jari - jari nya? ";
        cin >> jar;
       

       q3.setJari_jari(ala);
         cout << "-------------------" << endl;
         cout << "Persegi Lingkaran:\n";
         cout << "Alas   : " << q3.getJari_jari() << endl; 
         cout << "Total  :"  << q3.getTotal() << endl;
      break;

    default: cout << "Yang Anda Masukan Tidak Ada Didalam Daftar";
      break;
    }

    return 0;
}