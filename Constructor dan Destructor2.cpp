 //Program ini mendemonstrasikan penggunaan Destructors

#include <iostream>
using namespace std;

// Deklarasikan class Demo
class demo
{
    public:
    demo(); //membuat constructors dengan nama Demo
    ~demo(); //membuat destructors dengan nama Demo
};

//header fungsi untuk definisi eksternal contructors
demo::demo()
{
    cout << "Selamat datang di program constructor!"<< endl;
}

//header fungsi untuk definisi eksternal destructors
demo::~demo()
{
    cout << "Program Destructor sedang berjalan."<< endl;
}

int main()
{
    demo demoobject; // definisikan demo object

    cout << "Program ini mendemostrasikan sebuah objek"<< endl;
    cout << "dengan menggunakan constructor."<< endl;
    return 0;
}