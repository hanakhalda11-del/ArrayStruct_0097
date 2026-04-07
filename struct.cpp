#include <iostream>
using namespace std;

struct orang 
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
// deklarasi object dari stuct orang
    orang mhs;
// isi object
    cout << "nama mahasiswa : ";
    cin >> mhs.nama;
    cout << "alamat asal : ";
    cin >> mhs.alamat;
    cout << "umur : ";
    cin >> mhs.umur;
    cout << endl;
// menampilkan isi object
    cout << "nama : " << mhs.nama <<endl;
    cout << "alamat : " << mhs.alamat <<endl;
    cout << "umur : " << mhs.umur <<endl;
}