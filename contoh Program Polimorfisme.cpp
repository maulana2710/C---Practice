#include <iostream>
using namespace std;

class dasar {
public :
  virtual void setdata()=0;
  virtual void gethitung()=0;
};

class penambahan : public dasar {
private :
      int  x,y;
public :
      void setdata(){
              cout << " Angka ke 1 :" << endl;
              cin >> x;
	        cout << " Angka ke 2 :" << endl;
              cin >> y;
       }

       void gethitung(){
                x + y;
        }
};

class pengurangan : public dasar {
private :
      int  x,y;
public :
      void setdata(){
              cout << " Angka ke 1 :" << endl;
              cin >> x;
	        cout << " Angka ke 2 :" << endl;
              cin >> y;
       }

       void gethitung(){
                x - y;
        }
};


int main() {

penambahan q1 ;
pengurangan q2;

cout <<" Hasil Penambahan :" << endl;
q1.setdata();
cout << " a + b =  "  << q1.gethitung() << endl;

cout << " Hasil Pengurangan :" << endl;
q2.setdata();
cout<<" a - b =  "  << q2.gethitung() << endl;

}
