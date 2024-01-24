#include <iostream>
using namespace std;

long int fibonacci(int n)//buat fungsi rekursif dengan nama fungsi fibonacci bertipe int dengan parameter integer n
{
    if (n == 0||n == 1)//buat percabangan if dengan kondisi jika n sama dengan 0 atau jika n sama dengan 1
    {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(void) {

    int n, i, j; //deklarasi integer dengan nama variabel n bernilai 10, variabel i dan variabel j bernilai 0
    n = 10;
    

    cout << "Hasil bilangan fibonacci: \n";
    
    //buat perulangan for dengan nilai awal i sama dengan 1, 
    //batas akhir i kurang dari sama dengan n 
    //dan iterasi i bertambah 1 dengan menggunakan increment secara posfix
    for(i = 1; i <= n; i++){
        
        cout << "fibonacci ke-"<< i <<": " << fibonacci(j) << endl;
        
        //iterasi j bertambah 1 dengan menggunakan operator increment secara postfix
    }

    return 0;
}
