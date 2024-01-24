#include<iostream>
using namespace std;

/*prototype fungsi dengan ketentuan nama fungsi searchList bertipe integer*/
int searchList(const int [], int, int);

int main()
{
    /*deklarasi array bertipe integer dengan nama tests dan jumlah elemennya 5
    isi elemennya adalah angka tidak berurutan 50, 57, 89, 99, 68*/
    int tests[5] = {50,57,89,99,68};
    /*deklarasi variabel bertipe integer dengan nama results*/
    int results;
    
    /*inisialisasi variabel result dengan fungsi searchList 
    yang parameternya jumlah elemen array dan nilai yang dicari adalah 100 */
    results = searchList(tests, 5, 100);  

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
    while (index < numElems)
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
