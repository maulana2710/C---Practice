#include<iostream>
using namespace std;

/*prototype fungsi dengan ketentuan nama fungsi urutArray bertipe void*/
void urutArray(int [], int);
/*prototype fungsi dengan ketentuan nama fungsi tampilArray bertipe void*/
void tampilArray(const int [], int);

int main()
{
    /*deklarasi array bertipe integer dengan nama values dan jumlah elemennya 6
    isi elemennya adalah angka tidak berurutan 10, 8, 6, 5, 3, 1*/
    int values[6] = {10, 8, 6, 5, 3, 1};

    cout << "Nilai yang belum diurutkan adalah: \n";
    tampilArray(values, 6);

    urutArray(values, 6);

    cout << "Nilai yang sudah diurutkan adalah:\n";
    tampilArray(values, 6);
    return 0;
}

//membuat fungsi untuk mengurutkan array
void urutArray(int array[], int size)
{
    bool swap;
    int temp;

    /*membuat perulangan do-while*/
    do
    {
        swap = false;
        /*membuat perulangan FOR dengan ketentuan :
        - nilai awal integer count bernilai 0
        - batas akhir count kurang dari size dikurang 1
        - iterasi count bertambah 1*/
        for (int count = 0; count < (size - 1); count++)
        {
            /*membuat percabangan if dengan ketentuan :
            array[count] lebih besar dari array[count + 1]*/
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap); /*batas akhir menggunakan swap*/;
}

//membuat fungsi untuk menampilkan array
void tampilArray(const int array[], int size)
{
    /*membuat perulangan FOR dengan ketentuan :
    - nilai awal integer count bernilai 0
    - batas akhir count kurang dari size
    - iterasi count bertambah 1*/
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}
