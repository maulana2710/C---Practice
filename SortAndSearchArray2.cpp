#include<iostream>
using namespace std;

/*prototype fungsi dengan ketentuan nama fungsi searchList bertipe integer*/
int searchList(const int [], int, int);
/*deklarasi konstanta bertipe integer dengan nama SIZE bernilai 5*/
const int SIZE = 5;

int main()
{
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;

    results = searchList(tests, SIZE, 100);

    /*membuat percabangan IF dengan kondisi results sama dengan -1*/
    if (results == -1)
        cout << "Anda tidak mendapatkan poin 100 pada ujian apa pun\n";
    else
    {
        cout << "Anda mendapatkan poin 100 saat ujian ke ";
        cout << (results + 1) << endl;
        }
    return 0;
}

/*membuat fungsi searchList bertipe integer dengan parameter sebagai berikut :
- konstanta bertipe integer dengan nama list[]
- bertipe integer dengan nama numElems
- bertipe integer dengan nama value*/
int searchList(const int list[], int numElems, int value)
 {
    /*inisialisasi variabel bertipe integer dengan ketentuan :
    - nama variabel = index bernilai 0
    - nama variabel = position bernilai -1*/
    int index = 0;
    int position = -1;
    

    /*membuat perulangan WHILE dengan batas index kurang dari numElems dan not found*/
    while(index < numElems)
    {
        /*membuat percabangan IF dengan kondisi list[index] sama dengan value*/
        if (list[index] == value)
            {
                
                position = index;
            }
        /*iterasi index bertambah 1*/
        index++;
    }
    return position;
 }
