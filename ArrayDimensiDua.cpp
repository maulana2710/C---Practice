#include <iostream>
using namespace std;

int main(){ /*deklarasikan array bernama matriks dengan tipe integer*/
    int matriks[3][3] = {
        {1, 3, 5},
        {5, 3, 1},
        {6, 2, 3}
    };
    cout << "elemen array matriks indeks [2][1] adalah "<< matriks[2][1]; /*mencetak indeks array [2][1]*/
    return 0;
}
