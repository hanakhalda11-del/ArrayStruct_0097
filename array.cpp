#include <iostream>
using namespace std;

int main()
{
// deklarasi array dg inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
// deklarai tanpa inisialisasi
    int datamu[5];
    int x;
// cara membaca array dataku
    cout << "data ke - 3 : " << dataku[2] <<endl;

// operasi matematika
    x = dataku[2]*3;
// cara menulis atau mengisi array
    dataku[2] = 600;
    cout << "data ke - 3 yang baru : " << dataku[2] <<endl;

// mengisi array datamu satu per satu
    cout << "data index ke - 0 : ";
    cin >> datamu[0];
    cout << "data index ke - 1 : ";
    cin >> datamu[1];
    cout << "data index ke - 2 : ";
    cin >> datamu[2];
    cout << "data index ke - 3 : ";
    cin >> datamu[3];
    cout << "data index ke - 4 : ";
    cin >> datamu[4];

// tampilkan array datamu satu per satu
    cout << "data ke - 1 : " <<datamu[0] <<endl;
    cout << "data ke - 2 : " <<datamu[1] <<endl;
    cout << "data ke - 3 : " <<datamu[2] <<endl;
    cout << "data ke - 4 : " <<datamu[3] <<endl;
    cout << "data ke - 5 : " <<datamu[4] <<endl;

    cout <<endl;

// isi data dengan pengulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout << "data index ke - " << i << " : ";
        cin >> datamu[i];
    }

    cout <<endl;

// menampilkan datamu dg perulangan for
    for (int i = 0; i <= 4; i++)
   {
    cout << "data ke - " << i + 1 << " : " << datamu[i] <<endl;
   }
}
