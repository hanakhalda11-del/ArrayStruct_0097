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
    orang mhs;
// isi object
    cout << "nama mahasiswa : ";
    cin >> mhs.nama;
    cout << "alamat desa : ";
    cin >> mhs.alamat.desa;
    cout << "alamat kota : ";
    cin >> mhs.alamat.kota;
    cout << "umur : ";
    cin >> mhs.umur;
    cout << endl;
}
