#include <iostream>
using namespace std;

/*Mendeklarasikan nama class dengan nama PersegiPanjang*/
class PersegiPanjang
{
private :           
	double lebar;   // Mendeklarasikan tipe data double dengan nama variabel lebar
	double panjang; // Mendeklarasikan tipe data double dengan nama variabel panjang
public :             // Mendeklarasikan tipe akses dengan tipe akses private
    void setLebar(double );    //Mendeklarasikan function setter untuk variabel lebar
	void setPanjang(double);   //Mendeklarasikan function setter untuk variabel panjang
	double getLebar() const;   //Mendeklarasikan function getter untuk variabel lebar
	double getPanjang() const; //Mendeklarasikan function getter untuk variabel panjang
	double getLuas() const;    //Mendeklarasikan function getter untuk variabel luas
};

/*Mendefinisikan member function yang ada di tipe akses public*/
void PersegiPanjang::setLebar(double w) 
{
	lebar = w;
}
void PersegiPanjang::setPanjang (double len)

{
	panjang = len;
}
double PersegiPanjang::getLebar() const
{
	return lebar;
}
double PersegiPanjang::getPanjang() const
{
	return panjang;
}
double PersegiPanjang::getLuas() const
{
	return lebar*panjang; //rumus perkalian lebar * panjang
}

int main()
{
	PersegiPanjang box; // Instansiasi class PersegiPanjang dengan nama object box
	double psgLebar; //Deklarasikan tipe data double dengan nama variabel psgLebar
	double psgPanjang; // Deklarasikan tipe data double dengan nama variabel psgPanjang
cout << "Program ini akan menghitung luas dari persegi panjang \n";
cout << "Berapa lebarnya?\n";
cin >> psgLebar; //Input menggunakan variable psgLebar
cout << "Berapa panjangnya? \n";
cin >> psgPanjang; // Input menggunakan variable psgPanjang

/*Mengubah nilai setLebar dan setPanjang dengan object box */
box.setLebar(psgLebar);
box.setPanjang(psgPanjang);


cout << "Persegi Panjang:\n";
cout << "Lebar: " << box.getLebar() << endl; //mencetak nilai variabel Lebar dengan function getter 
cout << "Panjang: " << box.getPanjang() << endl; //mencetak nilai variabel Panjang dengan function getter 
cout << "Luas:"  << box.getLuas() << endl;//mencetak nilai variabel Luas dengan function getter 
return 0;
}
