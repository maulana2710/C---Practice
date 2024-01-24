#include <iostream>

using namespace std;

int main() {
   /*deklarasi array yang bernama A bertipe interger elemen baris 2 & kolom 3*/ 
    int A[2][3] = {{8,4,5},{3,9,1}};
         /*inisialisasi nilai pada matriks A*/
    
    for (int b=0;b<2;b++){
        for (int c=0;c<3;c++){ /*buat perulangan for untuk mencetak indeks kolom matriks */
            cout << A[b][c] << " "; /*cetak indeks baris dan kolom matriks*/
        }
        cout << endl;
    }
return 0;

}