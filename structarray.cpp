#include <iostream>
using namespace std;

struct detailalamat
{
    string desa;
    string kota;
};

struct orang 
{
    string nama;
    detailalamat alamat;
    int umur;
};

int main()
{
// deklarasi object dari struct orang
    orang mhs[3];
// isi object
    for (int i = 0; i <= 2; i++)
    {
        cout << "nama mahasiswa : ";
        getline (cin, mhs[i].nama);
        cout << "alamat desa : ";
        getline (cin, mhs[i].alamat.desa);
        cout << "alamat kota : ";
        getline (cin, mhs[i].alamat.kota);
        cout << "umur : ";
        cin >> mhs[i].umur;
        cout << endl;
    }
cout <<endl;

}
